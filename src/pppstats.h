//======================================================================
// File:		pppstats.h
// Author:	Matthias Toussaint
// Created:	Mon Nov  6 22:13:00 CET 2000
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

#ifndef PPPSTATS_HH
#define PPPSTATS_HH

#include <qobject.h>
//Added by qt3to4:
#include <QTimerEvent>

class PPPStats : public QObject 
{
  Q_OBJECT
public:
  int          soc;
  unsigned int rxTotal;
  unsigned int txTotal;
  int          pppDev;
  bool         pppUp;
  
  PPPStats();
  
  void setDevice( int );
  
public slots:
  void start();
  void stop();
  
protected:
  bool isUp();

  virtual void timerEvent( QTimerEvent* e );
  void getRemoteAddr();
  
  int timerId;

signals:
  void status( unsigned rxDelta, unsigned txDelta, 
               unsigned rxTotal, unsigned txTotal );
  void remoteAddr( const QString & );
  void pppStatus( bool );
  
};

#endif
