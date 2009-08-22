//======================================================================
// File:		wvexpertdlg.cpp
// Author:	Matthias Toussaint
// Created:	Sam Nov  4 18:45:29 CET 2000
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

#include <qtoolbutton.h>
#include <qwhatsthis.h>

#include <wvexpertdlg.h>

#include <iostream>

// Avoids typos ...
#define WV_INIT1          "Init1"
#define WV_INIT2          "Init2"
#define WV_INIT3          "Init3"
#define WV_INIT4          "Init4"
#define WV_INIT5          "Init5"
#define WV_INIT6          "Init6"
#define WV_INIT7          "Init7"
#define WV_INIT8          "Init8"
#define WV_INIT9          "Init9"
#define WV_MODEM          "Modem"
#define WV_MODEM_NAME     "Modem Name"
#define WV_MODEM_TYPE     "Modem Type"
#define WV_DIAL_COMMAND   "Dial Command"
#define WV_AREA_CODE      "Area Code"
#define WV_FORCE_ADDRESS  "Force Address"
#define WV_COMPUSERVE     "Compuserve"
#define WV_TONLINE        "Tonline"
#define WV_ISDN           "ISDN"
#define WV_AUTO_DNS       "Auto DNS"
#define WV_STUPID_MODE    "Stupid Mode"
#define WV_NEW_PPPD       "New PPPD"
#define WV_AUTO_RECONNECT "Auto Reconnect"
#define WV_DEFAULT        "Default"
#define WV_BAUD           "Baud"

WVExpertDlg::WVExpertDlg( QWidget *parent, const char *name ) :
  ExpertDlg( parent, name, true ),
  curGroup( "" ),
  cfg(0)
{
  connect( helpBut, SIGNAL( clicked() ),
           this, SLOT( helpSLOT() ));
  connect( okBut, SIGNAL( clicked() ),
           this, SLOT( acceptSLOT() ));
  connect( cancelBut, SIGNAL( clicked() ),
           this, SLOT( rejectSLOT() ));
  
  adjustSize();
}

WVExpertDlg::~WVExpertDlg()
{
}

void
WVExpertDlg::helpSLOT()
{
  QWhatsThis::enterWhatsThisMode();
}

void
WVExpertDlg::readConfig( const QString & account, SimpleCfg *sc )
{ 
  curGroup = account;
  cfg = sc;
  
  init1Edit->setText( cfg->getString( account, WV_INIT1, "" ));
  init2Edit->setText( cfg->getString( account, WV_INIT2, "" ));
  init3Edit->setText( cfg->getString( account, WV_INIT3, "" ));
  init4Edit->setText( cfg->getString( account, WV_INIT4, "" ));
  init5Edit->setText( cfg->getString( account, WV_INIT5, "" ));
  init6Edit->setText( cfg->getString( account, WV_INIT6, "" ));
  init7Edit->setText( cfg->getString( account, WV_INIT7, "" ));
  init8Edit->setText( cfg->getString( account, WV_INIT8, "" ));
  init9Edit->setText( cfg->getString( account, WV_INIT9, "" ));
  
  modemEdit->setText( cfg->getString( account, WV_MODEM, "" ));
  modemNameEdit->setText( cfg->getString( account, WV_MODEM_NAME, "" ));
  modemTypeEdit->setText( cfg->getString( account, WV_MODEM_TYPE, "" ));
  dialCommandEdit->setText( cfg->getString( account, WV_DIAL_COMMAND, "" ));

  areaCodeEdit->setText( cfg->getString( account, WV_AREA_CODE, "" ));
  forceAddressEdit->setText( cfg->getString( account, WV_FORCE_ADDRESS, "" ));
  
  if (cfg->contains( account, WV_COMPUSERVE ))
    compuserveBut->setChecked( cfg->getBool( account, WV_COMPUSERVE, false ) );
  else
    compuserveBut->setNoChange();
  
  if (cfg->contains( account, WV_TONLINE ))
    tonlineBut->setChecked( cfg->getBool( account, WV_TONLINE, false ) );
  else
    tonlineBut->setNoChange();
  
  if (cfg->contains( account, WV_ISDN ))
    isdnBut->setChecked( cfg->getBool( account, WV_ISDN, false ) );
  else
    isdnBut->setNoChange();
  
  if (cfg->contains( account, WV_AUTO_DNS ))
    dnsBut->setChecked( cfg->getBool( account, WV_AUTO_DNS, false ) );
  else
    dnsBut->setNoChange();
  
  if (cfg->contains( account, WV_STUPID_MODE ))
    stupidBut->setChecked( cfg->getBool( account, WV_STUPID_MODE, false ) );
  else
    stupidBut->setNoChange();
  
  if (cfg->contains( account, WV_NEW_PPPD ))
    newpppdBut->setChecked( cfg->getBool( account, WV_NEW_PPPD, false ) );
  else
    newpppdBut->setNoChange();
  
  if (cfg->contains( account, WV_AUTO_RECONNECT ))
    reconnectBut->setChecked( cfg->getBool( account, WV_AUTO_RECONNECT, true ) );
  else
    reconnectBut->setNoChange();
    
  QString baud = tr( WV_DEFAULT );
  
  if (cfg->contains( account, WV_BAUD ))
    baud = cfg->getString( account, WV_BAUD, 
        cfg->getString( "Dialer Defaults", WV_BAUD, "57600" ));
  
  for (int i=0; i<baudCombo->count(); i++)
  {
    if (baudCombo->text(i) == baud)
    {
      baudCombo->setCurrentItem(i);
      break;
    }
  }
}

void
WVExpertDlg::writeConfig( const QString & account, SimpleCfg *cfg )
{
  cfg->setString( account, WV_INIT1, init1Edit->text() );
  cfg->setString( account, WV_INIT2, init2Edit->text() );
  cfg->setString( account, WV_INIT3, init3Edit->text() );
  cfg->setString( account, WV_INIT4, init4Edit->text() );
  cfg->setString( account, WV_INIT5, init5Edit->text() );
  cfg->setString( account, WV_INIT6, init6Edit->text() );
  cfg->setString( account, WV_INIT7, init7Edit->text() );
  cfg->setString( account, WV_INIT8, init8Edit->text() );
  cfg->setString( account, WV_INIT9, init9Edit->text() );
  cfg->setString( account, WV_MODEM, modemEdit->text() );
  cfg->setString( account, WV_MODEM_NAME, modemNameEdit->text() );
  cfg->setString( account, WV_MODEM_TYPE, modemTypeEdit->text() );
  cfg->setString( account, WV_DIAL_COMMAND, dialCommandEdit->text() );
  cfg->setString( account, WV_AREA_CODE, areaCodeEdit->text() );
  cfg->setString( account, WV_FORCE_ADDRESS, forceAddressEdit->text() );
  
  if (compuserveBut->state() == QButton::NoChange)
    cfg->remove( account, WV_COMPUSERVE );
  else
    cfg->setBool( account, WV_COMPUSERVE, compuserveBut->isChecked() );
  
  if (tonlineBut->state() == QButton::NoChange)
    cfg->remove( account, WV_TONLINE );
  else
    cfg->setBool( account, WV_TONLINE, tonlineBut->isChecked() );
  
  if (isdnBut->state() == QButton::NoChange)
    cfg->remove( account, WV_ISDN );
  else
    cfg->setBool( account, WV_ISDN, isdnBut->isChecked() );
  
  if (dnsBut->state() == QButton::NoChange)
    cfg->remove( account, WV_AUTO_DNS );
  else
    cfg->setBool( account, WV_AUTO_DNS, dnsBut->isChecked() );
  
  if (stupidBut->state() == QButton::NoChange)
    cfg->remove( account, WV_STUPID_MODE );
  else
    cfg->setBool( account, WV_STUPID_MODE, stupidBut->isChecked() );
  
  if (newpppdBut->state() == QButton::NoChange)
    cfg->remove( account, WV_NEW_PPPD );
  else
    cfg->setBool( account, WV_NEW_PPPD, newpppdBut->isChecked() );
  
  if (reconnectBut->state() == QButton::NoChange)
    cfg->remove( account, WV_AUTO_RECONNECT );
  else
    cfg->setBool( account, WV_AUTO_RECONNECT, reconnectBut->isChecked() );
  
  if (baudCombo->currentText() == tr( WV_DEFAULT ))
    cfg->remove( account, WV_BAUD );
  else
    cfg->setString( account, WV_BAUD, baudCombo->currentText() );
}

void
WVExpertDlg::acceptSLOT()
{
  writeConfig( curGroup, cfg );
  
  QDialog::accept();
}

void
WVExpertDlg::rejectSLOT()
{
  readConfig( curGroup, cfg );
  
  QDialog::reject();
}
