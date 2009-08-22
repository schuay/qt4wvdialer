//======================================================================
// File:		wvlogfile.h
// Author:	Matthias Toussaint
// Created:	Son Nov 12 17:51:00 CET 2000
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

#ifndef WVLOGFILE_HH
#define WVLOGFILE_HH

#include <qlistview.h>
#include <qglist.h>

class WVLogfileEntry
{
public:
  WVLogfileEntry( const QString & a, unsigned start,
                  unsigned stop, unsigned ibytes, unsigned obytes ) :
    acc(a), startT(start), stopT(stop), iB(ibytes), oB(obytes) {}
  ~WVLogfileEntry() {}
  
  QString account() const { return acc; }
  QString startTime() const;
  unsigned duration() const { return stopT-startT; }
  unsigned download() const { return iB; }
  unsigned upload() const { return oB; }
  QString durationStr() const;
  QString downloadStr() const;
  QString uploadStr() const;
  QString day() const;
  QString logLine() const;
  unsigned deltaTime() const { return stopT-startT; }
  
protected:
  QString  acc;
  unsigned startT, stopT;
  unsigned iB, oB;
  
  QString dataStr( unsigned ) const;
  
};

class WVLogfile
{
public:
  WVLogfile();
  WVLogfile( const QString & );
  virtual ~WVLogfile();
  
  inline void setFilename( const QString & fname ) { filename = fname; }
  
  int year() const;
  int month() const;
  
  void fillList( QListView * list ) const;
  
  void append( const QString & account, unsigned start,
               unsigned stop, unsigned ibytes, unsigned obytes );
  
  void load();
  void clear();
  
protected:
  QString               filename;
  QList<WVLogfileEntry> list;
  
  QPixmap *providerPix() const;
  QPixmap *connectionPix() const;
  QPixmap *sumPix() const;
  
};

#endif


