//======================================================================
// File:		main.cpp
// Author:	Matthias Toussaint
// Created:	Son Okt 29 18:13:59 CET 2000
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

#include <QApplication>

#include <wvdialer.h>

int
main( int argc, char **argv )
{
  QApplication app( argc, argv );
  
  WVDialer *mainWin = new WVDialer( 0 );
  
  app.setMainWidget( mainWin );
  mainWin->show();
  
  return app.exec();
}
