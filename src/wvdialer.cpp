//======================================================================
// File:		wvdialer.cpp
// Author:	Matthias Toussaint
// Created:	Son Okt 29 17:04:06 CET 2000
//----------------------------------------------------------------------
// Permission to use, copy, modify, and distribute this software and its
// documentation  for any  purpose and  without fee is  hereby  granted,
// provided  that below copyright notice appear  in all copies  and that
// both  that  copyright  notice and  this permission  notice  appear in
// supporting documentation.
// 
// This  file is  provided AS IS  with no  warranties  of any kind.  The
// author shall  have no liability  with respect  to the infringement of
// copyrights, trade  secrets  or any patents by  this file  or any part
// thereof.  In no event will the author be liable  for any lost revenue
// or profits or other special, indirect and consequential damages.
//----------------------------------------------------------------------
// (c) 2000 Matthias Toussaint
//======================================================================

#include <qapplication.h>
#include <qfile.h>
#include <qfileinfo.h>
#include <qmessagebox.h>
#include <qstringlist.h>
#include <qtoolbutton.h>
#include <q3whatsthis.h>
//Added by qt3to4:
#include <QCloseEvent>
#include <QTimerEvent>
#include <QPixmap>
#include <QDateTime>

#include <simplecfg.h>
#include <stdlib.h>
#include <time.h>
#include <wvdialer.h>

#include <error.xpm>

#include <iostream>

WVDialer::WVDialer( QWidget *parent, const char *name ) :
  WVDialerDlg( parent, name ),
  exitFlag( false ),
  upTimer( -1 ),
  delayTimer( -1 ),
  upTime( 0 ),
  pppUp( false ),
  trayIcon(NULL),
  tray(NULL)
{  
  checkOldConfiguration();

  if (QFile::exists("/usr/share/icons/hicolor/32x32/qtwvdialer.png"))
  {
    trayIcon = new QIcon("/usr/share/icons/hicolor/32x32/qtwvdialer.png");
    this->setWindowIcon(*trayIcon);
    initializeTray();
  }
  
  QString fname = QDir::homeDirPath();
  fname += "/.qtwvdialer/settings";  
  cfg = new SimpleCfg( fname );
    
  configDlg = new WVConfigDlg( this );
  configDlg->hide();
  configDlg->load();
  
  loadConfig();
  
  wvdial = new Q3Process( this );
  startProcess = new Q3Process( this );
  
  stats = new PPPStats();
  
  errPix = QPixmap( (const char **)error_xpm );
  
  connect( connectBut, SIGNAL( clicked() ), this, SLOT( connectSLOT() ));
  connect( quitBut, SIGNAL( clicked() ), this, SLOT( quitSLOT() ));
  connect( helpBut, SIGNAL( clicked() ), this, SLOT( helpSLOT() ));
  connect( configBut, SIGNAL( clicked() ), this, SLOT( configSLOT() ));
  connect( wvdial, SIGNAL( readyReadStdout() ),
           this, SLOT( readStdoutSLOT()));
  connect( wvdial, SIGNAL( readyReadStderr() ),
           this, SLOT( readStderrSLOT()));
  connect( wvdial, SIGNAL( processExited() ),
           this, SLOT( exitedSLOT() ));
  connect( startProcess, SIGNAL( processExited() ),
           this, SLOT( exitedSLOT() ));
  connect( stats, SIGNAL( status( unsigned, unsigned, unsigned, unsigned )),
           this, SLOT( statsSLOT( unsigned, unsigned, unsigned, unsigned )));
  connect( stats, SIGNAL( remoteAddr( const QString & )),
           ipLabel, SLOT( setText( const QString & )));
  connect( stats, SIGNAL( pppStatus( bool ) ),
           this, SLOT( pppStatusSLOT( bool ) ));
  
  setIconText( tr( "PPP DOWN" ) );
}

WVDialer::~WVDialer()
{
}

void
WVDialer::connectSLOT()
{
  if (wvdial->isRunning())
  {
    wvdial->tryTerminate();
    
    if (configDlg->logEnabled())
    {
      logfile.append( providerCombo->currentText(),
                      startTime, ::time(0),
                      ibytes, obytes );
    }
  }
  else
  {
    QStringList args;
    args.append( "wvdial" );
    args.append( providerCombo->currentText() );

    wvdial->setArguments( args );
    
    if (!wvdial->start())
    {
      QString msg;
      msg.sprintf( tr ("Could not start wvdial!"
                       " Please check if wvdial is properly installed"
                       " and can be found in your $PATH environment variable." ) );

      QMessageBox::critical( this, "QtWVDialer", msg ); 
    }
    else
    {
      ibytes = 0;
      obytes = 0;
      startTime = ::time(0);
      
      QDate date = QDateTime::currentDateTime().date();
      
      QString logFilename;
      logFilename.sprintf( "%s/.qtwvdialer/logs/%02d_%d.log",
          QDir::homeDirPath().latin1(), date.month(), date.year() ); 
      logfile.setFilename( logFilename );    
      
      statsWid->setOnline( true );
      connectBut->setText( tr( "&Disconnect" ));    
      output->clear();      
      configBut->setEnabled( false );
      providerCombo->setEnabled( false );
    }
  }
}

void
WVDialer::quitSLOT()
{
  if (wvdial->isRunning())
  {
    if (askShutdown() == 0)
    {
      saveConfig();
      // hangup first -> exit when wvdial was terminated
      //
      wvdial->tryTerminate();
      exitFlag = true;
    }
  }
  else
  {
    saveConfig();
    qApp->quit();
  }
}

void
WVDialer::readStdoutSLOT()
{
  outputSLOT( wvdial->readLineStdout() );
}

void
WVDialer::readStderrSLOT()
{
  outputSLOT( wvdial->readLineStderr() );
}

void
WVDialer::outputSLOT( const QString & buf )
{
  QString line;
  unsigned pos = 0;
  
  while (pos < buf.length())
  {
    line = "";
    
    while (buf.mid( pos, 1 ) != "\n" && pos < buf.length() )
    {
      line += buf.mid( pos++, 1 );
    }
    pos++;
    
    output->insertItem( line );
  }
  
  // Scroll
  output->setBottomItem( output->count()-1 );
}

void
WVDialer::msgSLOT( const QString & line )
{
  new Q3ListBoxPixmap( output, errPix, line );
  
  output->setBottomItem( output->count()-1 );
}

void
WVDialer::statsSLOT( unsigned rxd, unsigned txd, 
                     unsigned rxt, unsigned txt )
{
  // sanity check. Works for me, does it work for you :) ?
  // (number of bytes seems to be fucked up when reading the first time)
  if (rxd > 100000) rxd = 0;
  if (txd > 100000) txd = 0;

  ibytes += rxd;
  obytes += txd;
    
  // Stats every two seconds. Normalize
  //
  double rx = rxd / 2048.;
  double tx = txd / 2048.;
  
  char *unit[3] = { "bytes", "KB", "MB" };
  int   ui = 0;
  QString tmp;
  
  double RX = (double)rxt;
  
  while (RX > 1024. && ui < 2)
  {
    RX /= 1024.;
    ui++;
  }
  
  if (ui == 0)
  {
    tmp.sprintf( "RX: %d bytes", rxt );
  }
  else
  {
    tmp.sprintf( "RX: %.2f %s", RX, unit[ui] );
  }
  rxLabel->setText( tmp );
  
  ui = 0;
  
  double TX = (double)txt;
  
  while (TX > 1024. && ui < 2)
  {
    TX /= 1024.;
    ui++;
  }
  
  if (ui == 0)
  {
    tmp.sprintf( "TX: %d bytes", txt );
  }
  else
  {
    tmp.sprintf( "TX: %.1f %s", TX, unit[ui] );
  }
  txLabel->setText( tmp );
  
  tmp.sprintf( "%.2f KB/s", rx );
  rxPS->setText( tmp );
  tmp.sprintf( "%.2f KB/s", tx );
  txPS->setText( tmp );
  
  statsWid->statsSLOT( rx, tx );
}

void
WVDialer::exitedSLOT()
{    
  if (sender() == wvdial)
  {
    statsWid->setOnline( false );
    connectBut->setText( tr( "&Connect" ) );
  
    QString msg;
    if (wvdial->exitStatus() == 0)
    {
      msg.sprintf( tr( "wvdial gently terminated ..." ) );
    }
    else
    {
      msg.sprintf( tr( "wvdial terminated with exit code %d." ), 
                   wvdial->exitStatus() );
    }

    msgSLOT( msg );

    // Check if hangup came from quit request
    //
    if (exitFlag) 
    {
      saveConfig();
      qApp->quit();
    }
    
    configBut->setEnabled( true );
    providerCombo->setEnabled( true );
  }
  else if (sender() == startProcess)
  {
    if (startProcess->exitStatus() != 0)
    {
      QString msg;
      msg.sprintf( tr ("Process %s " 
          "terminated with exit code %d" ), 
          configDlg->startProcessPath().latin1(), 
          startProcess->exitStatus() );

      QMessageBox::critical( this, "QtWVDialer: External process died...", msg ); 
    }
  }
}

void
WVDialer::closeEvent( QCloseEvent *ev )
{
  //if tray is initialized, hide window. otherwise, default to normal exit behavior
  if (tray) {
    this->hide();
    ev->ignore();
  }
  else if (wvdial->isRunning())
  {
    if (askShutdown() == 0)
    {
      saveConfig();
      // hangup first -> exit when wvdial was terminated
      //
      wvdial->tryTerminate();
      exitFlag = true;
    }    
    ev->ignore();
  }
  else
  {    
    ev->accept();
  }
}    
  
void
WVDialer::helpSLOT()
{
  Q3WhatsThis::enterWhatsThisMode();
}

void
WVDialer::loadConfig()
{
  setProviderCombo();
     
  cfg->load();
  
  int x = cfg->getInt( "geometry", "x", -1 );
  int y = cfg->getInt( "geometry", "y", -1 );
  int w = cfg->getInt( "geometry", "width", -1 );
  int h = cfg->getInt( "geometry", "height", -1 );
  
  if (x != -1 && y != -1 && w != -1 && h != -1)
  {
    setGeometry( x, y, w, h );
  }
  
  int item = cfg->getInt( "gui", "provider", 0 );
  providerCombo->setCurrentItem( item ); 
  configDlg->setStartProcess( cfg->getBool( "connection", "start-process", false ) );
  configDlg->setStartProcessPath( cfg->getString( "connection", "start-process-path", "netscape" ) );
  configDlg->setStartProcessDelay( cfg->getInt( "connection", "start-process-delay", 2 ) );
  configDlg->setPppDevice( cfg->getInt( "connection", "ppp", 0 ) );
  configDlg->setAskRemove( cfg->getBool( "gui", "ask-remove", true ) );
  configDlg->setShowStat( cfg->getBool( "gui", "show-statistics", true ) );
  configDlg->setShowGraph( cfg->getBool( "gui", "show-graph", true ) );
  configDlg->setLogEnabled( cfg->getBool( "connection", "logfiles", true ) );
  
  setGUI();
}

void
WVDialer::saveConfig()
{
  cfg->setInt( "geometry", "x", x() );  
  cfg->setInt( "geometry", "y", y() );  
  cfg->setInt( "geometry", "width", width() );  
  cfg->setInt( "geometry", "height", height() );  
  cfg->setInt( "gui", "provider", providerCombo->currentItem() );
  
  cfg->setBool( "connection", "start-process", configDlg->startProcess() );
  cfg->setString( "connection", "start-process-path", configDlg->startProcessPath() );
  cfg->setInt( "connection", "start-process-delay", configDlg->startProcessDelay() / 1000 );
  cfg->setInt( "connection", "ppp", configDlg->pppDevice() );
  cfg->setBool( "gui", "ask-remove", configDlg->askRemove() );
  cfg->setBool( "gui", "show-statistics", configDlg->showStat() );
  cfg->setBool( "gui", "show-graph", configDlg->showGraph() );
  cfg->setBool( "connection", "logfiles", configDlg->logEnabled() );
  
  cfg->save();  
}

int 
WVDialer::askShutdown()
{
  return QMessageBox::critical( this, "QtWVDialer", 
                tr( "There is still a PPP connection running. Do you want me"
                    " to shut down the connection?" ), 
                tr( "Yes, shutdown PPP and exit" ), 
                tr( "No, keep connection" ) );
}

void
WVDialer::configSLOT()
{
  if (configDlg->exec())
  {
    saveConfig();
    setProviderCombo();
    setGUI();
  }
}

void 
WVDialer::timerEvent( QTimerEvent *ev )
{
  if (ev->timerId() == delayTimer)
  {
    killTimer( delayTimer );
    delayTimer = -1;
  
    if (startProcess->isRunning()) return;
  
    QStringList args;
    args.append( configDlg->startProcessPath() );
    startProcess->setArguments( args );
  
    if (!startProcess->start())
    {
      QString msg;
      msg.sprintf( tr ("Could not start process %s" ),
                   configDlg->startProcessPath().latin1() );
    
      QMessageBox::critical( this, "QtWVDialer", msg ); 
    }
  }
  else if (ev->timerId() == upTimer )
  {
    upTime++;
    
    int min = upTime / 60;
    int sec = upTime % 60;
    
    QString ut;
    ut.sprintf( "%02d:%02d", min, sec );
    upLabel->setText( ut );
  }
}

void
WVDialer::pppStatusSLOT( bool up )
{
  if (up != pppUp)
  {
    if (up)
    {
      setIconText( tr( "PPP UP" ) );
      upTimer = startTimer( 1000 );
      
      if (configDlg->startProcess())
      {
        delayTimer = startTimer( configDlg->startProcessDelay() );
      }
    }
    else
    {
      setIconText( tr( "PPP DOWN" ) );
      killTimer( upTimer );
      upTimer = -1;
    }
  }
  
  pppUp = up;
}

void
WVDialer::setProviderCombo()
{
  QMap<QString,SimpleCfgGroup *>::Iterator it;
  
  providerCombo->clear();
  
  for (it = configDlg->config()->begin(); 
       it != configDlg->config()->end(); 
       ++it)
  {
    QString name = it.data()->name();
    QString account = name.right( name.length()-7 );
    
    if (account != "Defaults")
    {
      providerCombo->insertItem( account );
    }
  } 
}

void
WVDialer::setGUI()
{
  if (configDlg->showGraph())
  {
    statsWid->show();
    rxPS->setSizePolicy( QSizePolicy( QSizePolicy::Fixed, 
                                      QSizePolicy::Minimum ) );
    txPS->setSizePolicy( QSizePolicy( QSizePolicy::Fixed, 
                                      QSizePolicy::Minimum ) );
    upLabel->setSizePolicy( QSizePolicy( QSizePolicy::Fixed, 
                                         QSizePolicy::Minimum ) );
    rxPS->setMaximumWidth( 70 );
    txPS->setMaximumWidth( 70 );
    upLabel->setMaximumWidth( 70 );
  }
  else
  {
    statsWid->hide();
    rxPS->setSizePolicy( QSizePolicy( QSizePolicy::Expanding, 
                                      QSizePolicy::Minimum ) );
    txPS->setSizePolicy( QSizePolicy( QSizePolicy::Expanding, 
                                      QSizePolicy::Minimum ) );
    upLabel->setSizePolicy( QSizePolicy( QSizePolicy::Expanding, 
                                         QSizePolicy::Minimum ) );
    rxPS->setMaximumWidth( 32000 );
    txPS->setMaximumWidth( 32000 );
    upLabel->setMaximumWidth( 32000 );
  }

  if (configDlg->showStat())
  {
    rxLabel->show();
    rxPS->show();
    txLabel->show();
    txPS->show();
  }
  else
  {
    rxLabel->hide();
    rxPS->hide();
    txLabel->hide();
    txPS->hide();
  }
}

void
WVDialer::checkOldConfiguration()
{
  QString filename = QDir::homeDirPath();
  filename += "/.qtwvdialer";
  
  // Check if configuration file is from version < 0.3
  // if so create the new configuration directory and
  // move the file
  //
  QFile file( filename );
  if (file.exists())
  {
    QFileInfo fi( filename );
  
    if (fi.isFile())
    {
      SimpleCfg tmpCfg( filename );
      file.remove();
      
      QDir dir = QDir::home();
      dir.mkdir( ".qtwvdialer" );
      filename = QDir::homeDirPath();
      filename += "/.qtwvdialer/settings";
      tmpCfg.setFilename( filename );
      tmpCfg.save();
      dir.cd( ".qtwvdialer" );
      dir.mkdir( "logs" );
      QMessageBox::information( this, 
          tr( "QtWvDialer moved old configuration" ),
          tr( "QtWvDialer has created the directory .qtwvdialer in your"
              " home directory.<p>Here you'll find the settings of QtWvDialer"
              " and the monthly logfiles. The old configuration file" 
              " <i>(QtWvDialer version &lt; 0.3)</i> ~/.qtwvdialer can be found"
              " now at ~/.qtwvdialer/settings" ) );
    }
  }
  else
  {
    // create configuration directory 
    //
    QDir dir = QDir::home();
    dir.mkdir( ".qtwvdialer" );
    dir.cd( ".qtwvdialer" );
    dir.mkdir( "logs" );
    
    QMessageBox::information( this,
          tr( "QtWvDialer created configuration" ),
          tr( "QtWvDialer has created the directory .qtwvdialer in your"
              " home directory.<p>Here you'll find the settings of QtWvDialer"
              " and the monthly logfiles <i>(if enabled)</i>" ) );
  }
}

void
WVDialer::initializeTray()
{
  if (QSystemTrayIcon::isSystemTrayAvailable() )
  {
      tray = new QSystemTrayIcon(*trayIcon,this);

      restoreAction = new QAction(tr("&Restore"), this);
      connect(restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));

      quitAction = new QAction(tr("&Quit"), this);
      connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));

      trayIconMenu = new QMenu(this);
      trayIconMenu->addAction(restoreAction);
      trayIconMenu->addAction(quitAction);

      tray->setContextMenu(trayIconMenu);

      tray->show();
  }
}
  
  
  
  
