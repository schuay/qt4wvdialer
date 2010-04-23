//======================================================================
// File:		wvlogfile.cpp
// Author:	Matthias Toussaint
// Created:	Son Nov 12 18:17:48 CET 2000
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

#include <wvlogfile.h>
#include <qfile.h>
#include <q3textstream.h>
#include <qdatetime.h>
#include <qpixmap.h>
#include <sumitem.h>

#include <provider.xpm>
#include <connection.xpm>
#include <sum.xpm>

QString
WVLogfileEntry::logLine() const
{
  QString tmp;
  
  tmp.sprintf( "%s:%u:%u:%u:%u\n",
               acc.latin1(), startT, stopT, iB, oB );
  
  return tmp;
}

QString
WVLogfileEntry::day() const
{
  QString tmp;
  QDateTime dt;
  dt.setTime_t( startT );
  
  tmp.sprintf( "%s %d", 
               dt.date().dayName( dt.date().dayOfWeek() ).latin1(), 
               dt.date().day() );
  
  return tmp;
}

QString
WVLogfileEntry::startTime() const
{
  QString tmp;
  QDateTime dt;
  dt.setTime_t( startT );
  
  tmp.sprintf( "%02d:%02d:%02d", 
               dt.time().hour(), dt.time().minute(), dt.time().second() );
  
  return tmp;
}

QString
WVLogfileEntry::durationStr() const
{
  QString tmp;
  unsigned dur = stopT-startT;
  
  int h = dur/60/60;
  int m = (dur/60) % 60;
  int s = dur % 60;
  
  if (h)
  {
    tmp.sprintf( "%dh %dmin %ds", h, m, s );
  }
  else if (m)
  {
    tmp.sprintf( "%dmin %ds", m, s );
  }
  else
  {
    tmp.sprintf( "%ds", s );
  }
    
  return tmp;
}

QString
WVLogfileEntry::downloadStr() const
{
  return dataStr( iB );
}

QString
WVLogfileEntry::uploadStr() const
{
  return dataStr( oB );
}

QString
WVLogfileEntry::dataStr( unsigned bytes ) const
{
  char *unit[3] = { "bytes", "KB", "MB" };
  int   ui = 0;
  QString tmp;
  
  double U = (double)bytes;
  
  while (U > 1024. && ui < 2)
  {
    U /= 1024.;
    ui++;
  }
  
  if (ui == 0)
  {
    tmp.sprintf( "%d bytes", bytes );
  }
  else
  {
    tmp.sprintf( "%.2f %s", U, unit[ui] );
  } 
  
  return tmp;
}

WVLogfile::WVLogfile()
{
  list.setAutoDelete( true );
}

WVLogfile::WVLogfile( const QString & fname ) :
  filename( fname )
{
  list.setAutoDelete( true );
}

WVLogfile::~WVLogfile()
{
}

void
WVLogfile::load()
{
  QFile file( filename );
  
  list.clear();
  
  if (file.open( QIODevice::ReadOnly ))
  {
    char *buffer = new char [2000];
    
    while (file.readLine( buffer, 1999 ) > 0)
    {
      QString account = strtok( buffer, ":" );
      QString start = strtok( 0, ":" );
      QString stop = strtok( 0, ":" );
      QString ibytes = strtok( 0, ":" );
      QString obytes = strtok( 0, ":\n" );
      
      list.append( new WVLogfileEntry( account, start.toUInt(), stop.toUInt(),
                                       ibytes.toUInt(), obytes.toUInt() ));
    }
    
    delete [] buffer;
    
    file.close();
  }
}

void
WVLogfile::clear()
{
  list.clear();
}

void
WVLogfile::append( const QString & account, unsigned start,
                   unsigned stop, unsigned ibytes, unsigned obytes )
{
  WVLogfileEntry *entry = new WVLogfileEntry( account, start, stop,
                                              ibytes, obytes );
  
  QFile file( filename );
  
  if (file.open( QIODevice::WriteOnly | QIODevice::Append ))
  {
    Q3TextStream s( &file );
    
    s << entry->logLine();
    
    file.close();
  }
  
  list.append( entry );
}

void
WVLogfile::fillList( Q3ListView * lv ) const
{
  lv->clear();
  lv->setUpdatesEnabled( false );
  
  QListIterator<WVLogfileEntry> it(list);
  WVLogfileEntry *entry;
  
  unsigned duration=0, upload=0, download=0;
  int providerCnt = 0;
  
  it.toLast();
  
  while ((entry = it.current()))
  {
    // search parent, create if it does not exist yet
    //
    SumItem *parent=0;
    
    for (Q3ListViewItem *item=lv->firstChild(); item; item=item->nextSibling())
    {
      if (item->text(0) == entry->account())
      {
        parent = dynamic_cast<SumItem *> (item);
        break;
      }
    }
    
    if (!parent)
    {
      providerCnt++;
      parent = new SumItem( lv, entry->account() );
      parent->setOpen( true );
      parent->setPixmap( 0, *providerPix() );
    }
    
    Q3ListViewItem *connection = new Q3ListViewItem( parent, 
                       "", entry->day(), entry->startTime(),
                       entry->durationStr(), entry->downloadStr(), 
                       entry->uploadStr() );
    connection->setPixmap( 0, *connectionPix() );
    
    parent->addTime( entry->duration() );
    parent->addDownload( entry->download() );
    parent->addUpload( entry->upload() );
    
    duration += entry->duration();
    upload += entry->upload();
    download += entry->download();
    
    --it;
  }
  
  // show total sum if more than one provider
  //
  if (providerCnt > 1)
  {
    SumItem *sum = new SumItem( lv, "Total" );
    sum->setPixmap( 0, *sumPix() );   
    sum->addTime( duration );
    sum->addDownload( download );
    sum->addUpload( upload );
  }
  lv->setUpdatesEnabled( true );
  lv->update();
}

QPixmap *
WVLogfile::providerPix() const
{
  static QPixmap *pix = 0;
  
  if (!pix)
  {
    pix = new QPixmap((const char **)provider_xpm);
  }
  
  return pix;
}

QPixmap *
WVLogfile::connectionPix() const
{
  static QPixmap *pix = 0;
  
  if (!pix)
  {
    pix = new QPixmap((const char **)connection_xpm);
  }
  
  return pix;
}

QPixmap *
WVLogfile::sumPix() const
{
  static QPixmap *pix = 0;
  
  if (!pix)
  {
    pix = new QPixmap((const char **)sum_xpm);
  }
  
  return pix;
}
