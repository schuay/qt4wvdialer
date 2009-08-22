//======================================================================
// File:		pppstatswid.cpp
// Author:	Matthias Toussaint
// Created:	Son Okt 29 17:05:16 CET 2000
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

#include <pppstatswid.h>
#include <qpainter.h>
#include <qdrawutil.h>
#include <iostream>

PPPStatsWid::PPPStatsWid( QWidget *parent, const char *name ) :
  QWidget( parent, name ),
  rx(0.),
  tx(0.),
  rxPeak(0.),
  txPeak(0.),
  maxVal(4.),
  rxHist(0),
  txHist(0),
  histLen(0),
  hist(0),
  m_online( false )
{
  setBackgroundMode( NoBackground );
  startTimer( 500 );
}

PPPStatsWid::~PPPStatsWid()
{
}

void
PPPStatsWid::statsSLOT( float r, float t )
{
  rx = r;
  tx = t;
  
  if (rx > maxVal)
  {
    maxVal = (float)((int)(rx+1.));
  }
  
  if (tx > maxVal)
  {
    maxVal = (float)((int)(tx+1.));
  }
  
  if (rx > rxPeak) rxPeak = rx;
  if (tx > txPeak) txPeak = tx;

  if (hist >= histLen)
  {
    // Scroll list
    //
    for (int i=1; i<histLen; i++)
    {
      rxHist[i-1] = rxHist[i];
      txHist[i-1] = txHist[i];
    }
    
    hist = histLen-1;
  }
  
  rxHist[hist] = rx;
  txHist[hist] = tx;
 
  hist ++;
     
  update();
}

void
PPPStatsWid::timerEvent( QTimerEvent * )
{    
  // Peak bar goes down if current is lower
  // (but not below current)
  //
  if (hist > 0 && rxHist[hist-1] < rxPeak)
  {
    rxPeak *= 0.80;
    if (rxPeak < rxHist[hist-1]) rxPeak = rxHist[hist-1];
  }
  if (hist > 0 && txHist[hist-1] < txPeak)
  {
    txPeak *= 0.80;
    if (txPeak < txHist[hist-1]) txPeak = txHist[hist-1];
  }
  update();
}

void
PPPStatsWid::paintEvent( QPaintEvent * )
{
  // Update whole thing into pixmap and draw pixmap
  // Avoids flicker and is fast enough for me
  // (Might be too CPU intensive on slow machines)
  //
  pix.resize( width(), height() );
  if (online())
  {
    pix.fill( Qt::black );
  }
  else
  {
    pix.fill( colorGroup().background() );
  }
  
  QPainter p;
  p.begin(&pix);
  
  qDrawShadePanel( &p, 0, 0, width(), height(), colorGroup(), 
                   true, 1, 0 );
  int tmp, tmp2;
  
  // Draw grid
  //
  p.setFont( QFont( "Helvetica", 8 ) );
  
  int m = (int)(maxVal);
  tmp2 = 0;
  
  for (int i=1; i<m; i++)
  {
    tmp  = (int)qRound( i/maxVal * (height()-2) );
    
    if (tmp-tmp2 > 10)
    {
      p.setPen( QPen( Qt::darkGray, 0, DotLine ) );
      p.drawLine( 20, (height()-2)-tmp, width(), (height()-2)-tmp );
      QString tmpStr;
      tmpStr.sprintf( "%d", i );
      p.setPen( Qt::white );
      p.drawText( 2, (height()-2)-tmp+4, tmpStr );
      tmp2 = tmp;
    }
  }
  
  // Draw 
  if (online())
  {
    p.setPen( Qt::green );
    p.setBrush( Qt::darkGreen );
  }
  else
  {
    p.setPen( Qt::darkGreen );
    p.setBrush( Qt::black );
  }
  
  for( int i=0; i<histLen-1; i++)
  { 
    if (rxHist[i+1] != -1.)
    {
      tmp  = (int)qRound( rxHist[i]/maxVal * (height()-2) );
      tmp2 = (int)qRound( rxHist[i+1]/maxVal * (height()-2) );
      p.drawLine( 20+i, height()-tmp, 21+i, (height()-2)-tmp2 );
    }
  }
  
  if (hist > 0)
  {
    p.setPen( Qt::darkGreen );
    tmp = (int)qRound( rxHist[hist-1]/maxVal * (height()-2) );
    p.drawRect( width()-10, (height()-2)-tmp, 5, tmp );
  }
  
  p.setPen( Qt::green );
  tmp = (int)qRound( rxPeak/maxVal * (height()-2) );
  if (tmp)
  {
    p.drawLine( width()-10, (height()-2)-tmp, width()-5, (height()-2)-tmp );
    p.drawLine( width()-10, (height()-2)-tmp+1, width()-5, (height()-2)-tmp+1 );
  }
  
  if (online())
  {
    p.setPen( Qt::red );
    p.setBrush( Qt::darkRed );
  }
  else
  {
    p.setPen( Qt::darkRed );
    p.setBrush( Qt::black );
  }
  
  for( int i=0; i<histLen-1; i++)
  { 
    if (txHist[i+1] != -1.)
    {
      tmp  = (int)qRound( txHist[i]/maxVal * (height()-2) );
      tmp2 = (int)qRound( txHist[i+1]/maxVal * (height()-2) );
      p.drawLine( 20+i, (height()-2)-tmp, 21+i, (height()-2)-tmp2 );
    }
  }
  
  if (hist > 0)
  {
    p.setPen( Qt::darkRed );
    tmp = (int)qRound( txHist[hist-1]/maxVal * (height()-2) );
    p.drawRect( width()-5, (height()-2)-tmp, 5, tmp );
  }
  
  p.setPen( Qt::red );
  tmp = (int)qRound( txPeak/maxVal * height() );
  if (tmp)
  {
    p.drawLine( width()-5, (height()-2)-tmp, width(), (height()-2)-tmp );
    p.drawLine( width()-5, (height()-2)-tmp+1, width(), (height()-2)-tmp+1 );
  }
  
  p.end();  
  
  QPainter p2(this);
  p2.drawPixmap( 0, 0, pix );
}

void
PPPStatsWid::resizeEvent( QResizeEvent * )
{
  float *rxTmp = 0;
  float *txTmp = 0;
  bool   restore = false;
  
  if (histLen)
  {
    rxTmp   = new float [histLen];
    txTmp   = new float [histLen];
    restore = true;
    
    memcpy( rxTmp, rxHist, histLen * sizeof(float) );
    memcpy( txTmp, txHist, histLen * sizeof(float) );    
  }
  
  delete [] rxHist;
  delete [] txHist;
  
  int tmpHistLen = width()-35;
  
  txHist = new float [tmpHistLen];
  rxHist = new float [tmpHistLen];
  
  for (int i=0; i<tmpHistLen; i++)
  {
    rxHist[i] = txHist[i] = -1.;
  }
  
  if (restore)
  {
    memcpy( rxHist, rxTmp, QMIN( tmpHistLen, histLen ) * sizeof( float ));
    memcpy( txHist, txTmp, QMIN( tmpHistLen, histLen ) * sizeof( float ));
    
    delete [] rxTmp;
    delete [] txTmp;
  }
  
  histLen = tmpHistLen;  
  hist = QMIN( hist, histLen-1 );
}
