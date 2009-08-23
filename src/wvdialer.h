//======================================================================
// File:		wvdialer.h
// Author:	Matthias Toussaint
// Created:	Son Okt 29 17:06:39 CET 2000
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

#ifndef WVDIALER_HH
#define WVDIALER_HH

#include <wvdialerdlg.h>
#include <qpushbutton.h>
#include <q3listbox.h>
#include <qcombobox.h>
#include <q3process.h>
//Added by qt3to4:
#include <QTimerEvent>
#include <QCloseEvent>
#include <pppstats.h>
#include <qlabel.h>
#include <pppstatswid.h>
#include <qpixmap.h>
#include <wvconfigdlg.h>
#include <simplecfg.h>
#include <wvlogfile.h>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>

class WVDialer : public WVDialerDlg
{
  Q_OBJECT
public:
  WVDialer( QWidget *parent=0, const char *name=0 );
  virtual ~WVDialer();
  
protected slots:
  void connectSLOT();
  void quitSLOT();
  void outputSLOT( const QString & line );
  void msgSLOT( const QString & line );
  void statsSLOT( unsigned, unsigned, unsigned, unsigned );
  void exitedSLOT();
  void helpSLOT();
  void configSLOT();
  void pppStatusSLOT( bool );
  void readStdoutSLOT();
  void readStderrSLOT();
  
protected:
  Q3Process     *wvdial;
  Q3Process     *startProcess;
  PPPStats     *stats;
  QPixmap       errPix;
  bool          exitFlag;
  WVConfigDlg  *configDlg;
  SimpleCfg    *cfg;
  int           upTimer;
  int           delayTimer;
  unsigned      upTime;
  bool          pppUp;
  WVLogfile     logfile;
  unsigned      startTime;
  unsigned      ibytes;
  unsigned      obytes;
  
  void loadConfig();
  void saveConfig();
  void closeEvent( QCloseEvent * );
  int  askShutdown();
  void timerEvent( QTimerEvent * );
  void setProviderCombo();
  void setGUI();
  void checkOldConfiguration();
  void initializeTray();

private:
  QIcon *trayIcon;
  QSystemTrayIcon *tray;
  QMenu *trayIconMenu;
  QAction *restoreAction;
  QAction *quitAction;

};

#endif
