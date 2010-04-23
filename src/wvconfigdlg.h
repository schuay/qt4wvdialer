//======================================================================
// File:		wvconfigdlg.h
// Author:	Matthias Toussaint
// Created:	Mit Nov  1 23:44:26 CET 2000
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

#ifndef WVCONFIGDLG_HH
#define WVCONFIGDLG_HH

#include <configdlg.h>

#include <qpushbutton.h>
#include <q3listbox.h>
#include <qcombobox.h>
#include <qlineedit.h>
#include <qspinbox.h>
#include <qlabel.h>
#include <qcheckbox.h>
#include <simplecfg.h>
#include <wvexpertdlg.h>
#include <q3process.h>

#include <wvprovidernamedlg.h>

class WVConfigDlg : public ConfigDlg
{
  Q_OBJECT
public:
  WVConfigDlg( QWidget *parent=0, const char *name=0 );
  virtual ~WVConfigDlg();
  
  void load();
  inline SimpleCfg *config() { return cfg; }
  
  void show();
  
  bool startProcess() const;
  QString startProcessPath() const;
  int startProcessDelay() const;
  void setStartProcess( bool );
  void setStartProcessPath( const QString & );
  void setStartProcessDelay( int );
  bool askRemove() const;
  void setAskRemove( bool );
  bool showStat() const;
  void setShowStat( bool );
  bool showGraph() const;
  void setShowGraph( bool );
  int  pppDevice() const;
  void setPppDevice( int );
  int  timeoutValue() const;
  void setTimeoutValue( int );
  bool timeout() const;
  void setTimeout( bool );
  bool logEnabled() const;
  void setLogEnabled( bool );
  
protected slots:
  void helpSLOT();
  void addProviderSLOT();
  void browseSLOT();
  void startSLOT( bool );
  void timeoutSLOT( bool );
  void providerSLOT( const QString & );
  void moreOptionsSLOT();
  void acceptSLOT();
  void rejectSLOT();
  void outputSLOT( const QString & );
  void exitedSLOT();
  void runWvdialconfSLOT();
  void removeProviderSLOT();
  void clearLogSLOT();
  void readLogfileSLOT();
  void nextMonthSLOT();
  void previousMonthSLOT();
  void readStderrSLOT();
  void readStdoutSLOT();
  
protected:
  QString            curGroup;
  QString            confPath;
  WVProviderNameDlg *providerName;
  SimpleCfg         *cfg;
  WVExpertDlg       *expertDlg;
  Q3Process          *wvdialconf;
  
  void writeCfg( const QString & );
  
};

#endif
