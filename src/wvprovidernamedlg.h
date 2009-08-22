//======================================================================
// File:		wvprovidernamedlg.h
// Author:	Matthias Toussaint
// Created:	Son Nov  5 01:17:20 CET 2000
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

#ifndef WVPROVIDERNAMEDLG_HH
#define WVPROVIDERNAMEDLG_HH

#include <providernamedlg.h>
#include <qlineedit.h>
#include <qstring.h>
#include <qpushbutton.h>
#include <qstringlist.h>
#include <qlabel.h>

class WVProviderNameDlg : public NameDlg
{
  Q_OBJECT
public:
  WVProviderNameDlg( QWidget *parent=0, const char *name=0 );
  virtual ~WVProviderNameDlg();
  
  inline QString provider() const { return providerEdit->text(); }
  void show();

  void setNameList( const QStringList & );
    
protected slots:
  void helpSLOT();
  void checkNameSLOT( const QString & );
  void acceptSLOT();
  
protected:
  QStringList names;
  
};

#endif
