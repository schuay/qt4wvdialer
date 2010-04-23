//======================================================================
// File:		wvexpertdlg.h
// Author:	Matthias Toussaint
// Created:	Sam Nov  4 18:42:37 CET 2000
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

#ifndef WVEXPERTDLG_HH
#define WVEXPERTDLG_HH

#include <qcombobox.h>
#include <qlineedit.h>
#include <qcheckbox.h>
#include <qlabel.h>
#include <q3groupbox.h>
#include <qstring.h>
#include <qpushbutton.h>
#include <simplecfg.h>
#include <expertdlg.h>

class WVExpertDlg : public ExpertDlg
{
  Q_OBJECT
public:
  WVExpertDlg( QWidget *parent=0, const char *name=0 );
  virtual ~WVExpertDlg();
  
  void readConfig( const QString &, SimpleCfg * );
  void writeConfig( const QString &, SimpleCfg * );

  
protected slots:
  void helpSLOT();
  void acceptSLOT();
  void rejectSLOT();
  
protected:
  QString    curGroup;
  SimpleCfg *cfg;
  
};

#endif
