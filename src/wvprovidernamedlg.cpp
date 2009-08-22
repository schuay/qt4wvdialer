//======================================================================
// File:		wvprovidernamedlg.cpp
// Author:	Matthias Toussaint
// Created:	Son Nov  5 01:19:39 CET 2000
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
#include <q3whatsthis.h>

#include <wvprovidernamedlg.h>

WVProviderNameDlg::WVProviderNameDlg( QWidget *parent, const char *name ) :
  NameDlg( parent, name, true )
{
  connect( helpBut, SIGNAL( clicked() ),
           this, SLOT( helpSLOT() ));
  connect( providerEdit, SIGNAL( textChanged( const QString & )),
           this, SLOT( checkNameSLOT( const QString & )));
  connect( okBut, SIGNAL( clicked() ),
           this, SLOT( acceptSLOT() ));
}

WVProviderNameDlg::~WVProviderNameDlg()
{
}

void
WVProviderNameDlg::helpSLOT()
{
  Q3WhatsThis::enterWhatsThisMode(); 
}

void
WVProviderNameDlg::show()
{
  providerEdit->clear();
  okBut->setEnabled( false );
  QDialog::show();
}

void
WVProviderNameDlg::checkNameSLOT( const QString & str )
{
  QString tmp = str.stripWhiteSpace();
  
  for (QStringList::Iterator it = names.begin(); it != names.end(); ++it ) 
  {
    if (*it == tmp)
    {
      okBut->setEnabled( false );
      nameLabel->setText( tr( "Name already in use!" ) );
      return;
    }
  }
  
  nameLabel->setText( tr( "Please enter a name for the account" ) );
  
  okBut->setEnabled( !tmp.isEmpty() );
}

void
WVProviderNameDlg::setNameList( const QStringList & list )
{
  names = list;
}

void
WVProviderNameDlg::acceptSLOT()
{
  providerEdit->setText( providerEdit->text().stripWhiteSpace() );  
  QDialog::accept();
}
