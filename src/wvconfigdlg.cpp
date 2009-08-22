//======================================================================
// File:		wvconfigdlg.cpp
// Author:	Matthias Toussaint
// Created:	Mit Nov  1 23:44:15 CET 2000
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

#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qtoolbutton.h>
#include <qwhatsthis.h>

#include <stdlib.h>
#include <wvconfigdlg.h>
#include <wvlogfile.h>

#include <iostream>

// Avoids typos ...
#define WV_PRODUCT      "Product"
#define WV_HOMEPAGE     "Homepage"
#define WV_COUNTRY      "Country"
#define WV_PHONE        "Phone"
#define WV_USERNAME     "Username"
#define WV_PASSWORD     "Password"
#define WV_IDLE_SECONDS "Idle Seconds"

WVConfigDlg::WVConfigDlg( QWidget *parent, const char *name ) :
  ConfigDlg( parent, name, true ),
  curGroup( "" )
{
  confPath = "/etc/wvdial.conf";
  
  providerName = new WVProviderNameDlg( this, "NAME" );
  providerName->hide();

  wvdialconf = new QProcess( this );
  QStringList args;
  args.append( "wvdialconf" );
  args.append( confPath );
  wvdialconf->setArguments( args );

  // Do some connections
  //  
  connect( helpBut, SIGNAL( clicked() ),
           this, SLOT( helpSLOT() ));
  connect( runConfBut, SIGNAL( clicked() ),
           this, SLOT( runWvdialconfSLOT() ));
  connect( okBut, SIGNAL( clicked() ),
           this, SLOT( acceptSLOT() ));
  connect( cancelBut, SIGNAL( clicked() ),
           this, SLOT( rejectSLOT() ));
  connect( addBut, SIGNAL( clicked() ),
           this, SLOT( addProviderSLOT() ));
  connect( removeBut, SIGNAL( clicked() ),
           this, SLOT( removeProviderSLOT() ));
  connect( moreBut, SIGNAL( clicked() ),
           this, SLOT( moreOptionsSLOT() ));
  connect( browseBut, SIGNAL( clicked() ),
           this, SLOT( browseSLOT() ));
  connect( clearLogBut, SIGNAL( clicked() ),
           this, SLOT( clearLogSLOT() ));
  connect( startBut, SIGNAL( toggled( bool ) ),
           this, SLOT( startSLOT( bool ) ));
  connect( timeoutBut, SIGNAL( toggled( bool ) ),
           this, SLOT( timeoutSLOT( bool ) ));
  connect( providerCombo, SIGNAL( activated( const QString & ) ),
           this, SLOT( providerSLOT( const QString & )));
  connect( wvdialconf, SIGNAL( readyReadStdout() ),
           this, SLOT( readStdoutSLOT()));
  connect( wvdialconf, SIGNAL( readyReadStderr() ),
           this, SLOT( readStderrSLOT()));
  connect( wvdialconf, SIGNAL( processExited() ),
           this, SLOT( exitedSLOT() ));
  connect( monthCombo, SIGNAL( activated( int ) ),
           this, SLOT( readLogfileSLOT() ));
  connect( yearSpin, SIGNAL( valueChanged( int ) ),
           this, SLOT( readLogfileSLOT() ));
  connect( prevBut, SIGNAL( clicked() ), 
           this, SLOT( previousMonthSLOT() ));
  connect( nextBut, SIGNAL( clicked() ), 
           this, SLOT( nextMonthSLOT() ));
  
  startSLOT( false );
  timeoutSLOT( false );
  
  cfg = new SimpleCfg( confPath );
  
  expertDlg = new WVExpertDlg( this );
  expertDlg->hide();
  
  adjustSize();
  
  // There seems to be a tiny bug in qtdesigner 
  // it does not set the max value -> do it by hand
  yearSpin->setMaxValue( 3000 );
  yearSpin->setMinValue( 2000 );
  
  for (int i=1; i<6; ++i)
  {
    logfile->setColumnAlignment( i, Qt::AlignRight );
  }
  
  logfile->setSorting( -1 );
  logfile->setItemMargin( 2 );
}

WVConfigDlg::~WVConfigDlg()
{
  // Do tmp file cleanup
  //
  QString tmpName = QDir::homeDirPath();
  tmpName += "/wvdial.conf.tmp";
  QFile file( tmpName );
  file.remove();
}

void
WVConfigDlg::show()
{
  // before fucking with the configuration file
  // make temporary copy of it...
  //
  QFile file( confPath );
  
  if (file.open( IO_ReadOnly ))
  {
    char *buffer = new char [file.size()];
    
    file.readBlock( buffer, file.size() );
    file.close();
    
    QString tmpName = QDir::homeDirPath();
    tmpName += "/wvdial.conf.tmp";
    
    QFile tmp( tmpName );
    if (tmp.open( IO_WriteOnly ))
    {
      tmp.writeBlock( buffer, file.size() );
      tmp.close();
    }
    else
    {
      // Can't happen. Writing to home _must_ work or the whole
      // system is fucked up
      QString msg;
      msg.sprintf( tr( "Could not open configuration file %s for writing. "
                       "Please check permissions." ), tmpName.latin1() );
     
      QMessageBox::critical( this, tr( "QtWvDialer: Couldn't write temporary file" ), 
                              msg );
    }    
  } 
  else
  {
    QString msg;
    msg.sprintf( tr( "Could not open configuration file %s for reading. "
                     "Please check if file is available and has sufficient "
                     "permissions (read/write for user %s).<p><i>If this is your first invocation "
                     "of this program go to the Modem configuration "
                     "and create a configuration file by running "
                     "wvdialconf.</i>" ), confPath.latin1(), getenv( "USER" ) );
     
    QMessageBox::critical( this, tr( "QtWvDialer: Couldn't read configuration" ), 
                           msg );
  }
  
  // prepare logfile page
  //
  yearSpin->setValue( QDateTime::currentDateTime().date().year() );
  monthCombo->setCurrentItem( QDateTime::currentDateTime().date().month()-1 );
  readLogfileSLOT(); 
  
  QDialog::show();    
}

void
WVConfigDlg::helpSLOT()
{
  QWhatsThis::enterWhatsThisMode();
}

void
WVConfigDlg::addProviderSLOT()
{
  // Prepare dialog with already defined names
  //
  QStringList list;
  for (int i=0; i<providerCombo->count(); i++)
  {
    list.append( providerCombo->text(i) );
  }
  providerName->setNameList( list );
  
  // Exec diallog and append new name if ok
  //
  if (providerName->exec())
  {
    if (!curGroup.isEmpty())
    {
      writeCfg( curGroup );
    }  
    providerCombo->insertItem( providerName->provider() );
    providerCombo->setCurrentItem( providerCombo->count()-1 );
    providerSLOT( providerName->provider() );
  } 
}

void
WVConfigDlg::removeProviderSLOT()
{
  if (curGroup.isEmpty()) return;
  
  if (askRemove())
  {
    // chopp "Dialer" from group name (7 chars)
    QString account = curGroup.right( curGroup.length()-7 );
    
    QString msg;
    msg.sprintf( tr( "You are going to remove the account \"%s\". Are you shure"
                     " you want to proceed?" ), account.latin1() );
     
    if (QMessageBox::warning( this, tr( "QtWvDialer: Remove account?" ), 
                          msg, tr( "Yes, remove account" ), tr( "Cancel" ) ) != 0)
    {
      return;
    }
  }
    
  if (!curGroup.isEmpty())
  {
    cfg->remove( curGroup );
    curGroup = "";
    providerCombo->removeItem( providerCombo->currentItem() ); 
  }
  
  providerSLOT( providerCombo->currentText() );
}

void
WVConfigDlg::browseSLOT()
{
  QString startPath = progPath->text().isEmpty() ? 
      QString( QDir::homeDirPath() ) : progPath->text();
  
  QString fname = QFileDialog::getOpenFileName( startPath, "*", this, 
                      "FSEL", tr( "QtWvDialer: Select program" ) );
  
  if (!fname.isEmpty())
  {
    progPath->setText( fname );
  }
}

void
WVConfigDlg::startSLOT( bool on )
{
  progPath->setEnabled( on );
  browseBut->setEnabled( on );
  delaySpin->setEnabled( on );
  delayLabel->setEnabled( on );
}

void
WVConfigDlg::timeoutSLOT( bool on )
{
  timeoutSpin->setEnabled( on );
  timeoutLabel->setEnabled( on );
}

void
WVConfigDlg::load()
{
  cfg->load();
  providerCombo->clear();
  
  QMap<QString,SimpleCfgGroup *>::Iterator it;
  
  for (it = cfg->begin(); it != cfg->end(); ++it)
  {
    QString tmp = it.data()->name();
    // chopp "Dialer" from group name (7 chars)
    QString account = tmp.right( tmp.length()-7 );
    
    providerCombo->insertItem( account );
  }  
  curGroup = "";
  providerCombo->setCurrentItem( 0 );
  providerSLOT( providerCombo->currentText() );
}

void
WVConfigDlg::providerSLOT( const QString & name )
{
  if (!curGroup.isEmpty())
  {
    writeCfg( curGroup );
  }
  
  QString account = "Dialer ";
  account += name;
  
  curGroup = account;
  
  removeBut->setEnabled( name != "Defaults" );
  
  productEdit->setText( cfg->getString( account, WV_PRODUCT, "" ));
  homeEdit->setText( cfg->getString( account, WV_HOMEPAGE, "" ));
  countryEdit->setText( cfg->getString( account, WV_COUNTRY, "" ));
  phoneEdit->setText( cfg->getString( account, WV_PHONE, "" ));
  userEdit->setText( cfg->getString( account, WV_USERNAME, "" ));
  passwdEdit->setText( cfg->getString( account, WV_PASSWORD, "" ));

  if (cfg->getInt( "Dialer Defaults", WV_IDLE_SECONDS, 180 ) == 0)
  {
    setTimeout( false );
    setTimeoutValue( 180 );
  }
  else
  {
    setTimeout( true );
    setTimeoutValue( cfg->getInt( "Dialer Defaults", WV_IDLE_SECONDS, 180 ) );
  }
  
  expertDlg->readConfig( account, cfg );  
}

void
WVConfigDlg::moreOptionsSLOT()
{
  expertDlg->exec();
}

void
WVConfigDlg::writeCfg( const QString & group )
{
  cfg->setString( group, WV_PRODUCT, productEdit->text() ); 
  cfg->setString( group, WV_HOMEPAGE, homeEdit->text() );  
  cfg->setString( group, WV_COUNTRY, countryEdit->text() );  
  cfg->setString( group, WV_PHONE, phoneEdit->text() );  
  cfg->setString( group, WV_USERNAME, userEdit->text() );  
  cfg->setString( group, WV_PASSWORD, passwdEdit->text() );
  
  if (!timeout())
  {
    cfg->setInt( "Dialer Defaults", WV_IDLE_SECONDS, 0 );
  }
  else
  {
    cfg->setInt( "Dialer Defaults", WV_IDLE_SECONDS, timeoutValue() );
  }
  
  expertDlg->writeConfig( group, cfg );
}

void
WVConfigDlg::acceptSLOT()
{
  providerSLOT( providerCombo->currentText() );
  
  cfg->removeEmpty();
  if (!cfg->save())
  {
    QString msg;
    msg.sprintf( tr( "Could not open configuration file %s for writing. "
                     "Please check permissions." ), cfg->filename().latin1() );

    QMessageBox::critical( this, tr( "QtWvDialer: Couldn't write configuration file" ), 
                           msg );
  }
  
  QDialog::accept();
}

void
WVConfigDlg::rejectSLOT()
{
  // User decided to discard all changes
  // copy file back as wvdialconf may have changed the file
  //
  QString tmpName = QDir::homeDirPath();
  tmpName += "/wvdial.conf.tmp";
    
  QFile file( tmpName );
  
  if (file.open( IO_ReadOnly ))
  {
    char *buffer = new char [file.size()];
    
    file.readBlock( buffer, file.size() );
    file.close();
    
    QFile tmp( confPath );
    
    if (tmp.open( IO_WriteOnly ))
    {
      tmp.writeBlock( buffer, file.size() );
      tmp.close();
    }
    else
    {
      QString msg;
      msg.sprintf( tr( "Could not open configuration file %s for writing. "
                       "Please check permissions." ), confPath.latin1() );
     
      QMessageBox::critical( this, tr( "QtWvDialer: Couldn't write configuration file" ), 
                              msg );
    }    
  } 
  else
  {
    QString msg;
    msg.sprintf( tr( "Could not open configuration file %s for reading. "
                     "Please check if file is available and has sufficient "
                     "permissions (read/write for user %s)." ), 
                     tmpName.latin1(), getenv( "USER" ) );
     
    QMessageBox::critical( this, tr( "QtWvDialer: Couldn't read configuration" ), 
                           msg );
  }
  
  load();
  QDialog::reject();
}

void
WVConfigDlg::readStdoutSLOT()
{
  outputSLOT( wvdialconf->readLineStdout() );
}

void
WVConfigDlg::readStderrSLOT()
{
  outputSLOT( wvdialconf->readLineStderr() );
}

void
WVConfigDlg::outputSLOT( const QString & buf )
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
WVConfigDlg::exitedSLOT()
{
  load();
  runConfBut->setEnabled( true );
}

void
WVConfigDlg::runWvdialconfSLOT()
{
  runConfBut->setEnabled( false );
  output->clear();  
  
  QStringList args;
  args.append( "wvdialconf" );
  args.append( confPath );
  wvdialconf->setArguments( args );
  wvdialconf->start();
}

bool
WVConfigDlg::startProcess() const
{
  return startBut->isChecked();
}

QString
WVConfigDlg::startProcessPath() const
{
  return progPath->text();
}

int
WVConfigDlg::startProcessDelay() const
{
  return delaySpin->value() * 1000; 
}

void
WVConfigDlg::setStartProcess( bool on )
{
  startBut->setChecked( on );
}

void
WVConfigDlg::setStartProcessPath( const QString & path )
{
  progPath->setText( path );
}

void
WVConfigDlg::setStartProcessDelay( int val )
{
  delaySpin->setValue( val ); 
}

bool
WVConfigDlg::askRemove() const
{
  return askRemoveBut->isChecked();
}

void
WVConfigDlg::setAskRemove( bool flag )
{
  askRemoveBut->setChecked( flag );
}

bool
WVConfigDlg::showStat() const
{
  return showStatBut->isChecked();
}

void
WVConfigDlg::setShowStat( bool flag )
{
  showStatBut->setChecked( flag );
}

bool
WVConfigDlg::showGraph() const
{
  return showGraphBut->isChecked();
}

bool
WVConfigDlg::logEnabled() const
{
  return enableLogBut->isChecked();
}

void
WVConfigDlg::setLogEnabled( bool flag )
{
  enableLogBut->setChecked( flag );
}

void
WVConfigDlg::setShowGraph( bool flag )
{
  showGraphBut->setChecked( flag );
}

int
WVConfigDlg::pppDevice() const
{
  return portSpin->value();
}

void
WVConfigDlg::setPppDevice( int dev )
{
  portSpin->setValue( dev );
}

bool
WVConfigDlg::timeout() const
{
  return timeoutBut->isChecked();
}

void
WVConfigDlg::setTimeout( bool t )
{
  timeoutBut->setChecked( t );
}

int
WVConfigDlg::timeoutValue() const
{
  return timeoutSpin->value();
}

void
WVConfigDlg::setTimeoutValue( int t )
{
  timeoutSpin->setValue( t );
}

void
WVConfigDlg::clearLogSLOT()
{
  if (QMessageBox::warning( this, tr( "QtWvDialer: Clear logfiles?" ), 
    tr( "<qt>Do you really want to remove all logfiles?<p>"
        " You can't undo this operation. All <b>QtWvDialer</b> logfiles"
        " will be removed from your harddisk.</qt>" ), 
    tr( "Yes, remove logfiles" ), tr( "Cancel" ) ) == 0)
  {
    QString logPath;
    logPath.sprintf( "%s/.qtwvdialer/logs", QDir::homeDirPath().latin1() );
  
    QDir dir( logPath );
    QStringList list = dir.entryList( "*.log", QDir::Files );

    for ( QStringList::Iterator it = list.begin(); it != list.end(); ++it ) 
    {
      if (*(*it).latin1() != '.')
      {
        QString filename = logPath;
        filename += "/";
        filename += *it;
        QFile::remove( filename );
      }
    }
  }
}

void
WVConfigDlg::readLogfileSLOT()
{
  QString logFilename;
  logFilename.sprintf( "%s/.qtwvdialer/logs/%02d_%d.log",
      QDir::homeDirPath().latin1(), 
      monthCombo->currentItem()+1, yearSpin->value() ); 
  WVLogfile lf ( logFilename );
  lf.load();
  
  lf.fillList( logfile );
}

void
WVConfigDlg::nextMonthSLOT()
{
  int month = monthCombo->currentItem();
  int year = yearSpin->value();
  
  month++;
  
  if (month == 12)
  {
    month = 0;
    year++;
  }
  
  monthCombo->setCurrentItem( month );
  yearSpin->setValue( year );
  
  readLogfileSLOT();
}

void
WVConfigDlg::previousMonthSLOT()
{
  int month = monthCombo->currentItem();
  int year = yearSpin->value();
  
  month--;
  
  if (month == -1)
  {
    month = 11;
    year--;
  }
  
  monthCombo->setCurrentItem( month );
  yearSpin->setValue( year );
  
  readLogfileSLOT();
}

