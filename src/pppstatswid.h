//======================================================================
// File:		pppstatswid.h
// Author:	Matthias Toussaint
// Created:	Son Okt 29 17:06:18 CET 2000
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

#ifndef PPPSTATSWID_HH
#define PPPSTATSWID_HH

#include <qwidget.h>
#include <qpixmap.h>
//Added by qt3to4:
#include <QPaintEvent>
#include <QResizeEvent>
#include <QTimerEvent>

class PPPStatsWid : public QWidget
{
  Q_OBJECT
public:
  PPPStatsWid( QWidget *parent=0, const char *name=0 );
  virtual ~PPPStatsWid();
  
  void setOnline( bool online ) { m_online = online; }
  
public slots:
  void statsSLOT( float, float );

protected:
  QPixmap  pix;
  float    rx, tx, rxPeak, txPeak;
  float    maxVal;
  float   *rxHist;
  float   *txHist;
  int      histLen;
  int      hist;
  bool     m_online;
  
  void paintEvent( QPaintEvent * );
  void timerEvent( QTimerEvent * );
  void resizeEvent( QResizeEvent * );
  
  bool online() const { return m_online; }
  
};

#endif

