#ifndef SUMITEM_HH
#define SUMITEM_HH

#include <q3listview.h>

class SumItem : public Q3ListViewItem
{
public:
  SumItem( Q3ListView *, const QString & );
  virtual ~SumItem();
  
  void addTime( unsigned sec )       { m_time += sec; }
  void addUpload( unsigned bytes )   { m_upload += bytes; }
  void addDownload( unsigned bytes ) { m_download += bytes; }
  
protected:
  unsigned m_time;
  unsigned m_upload;
  unsigned m_download;
  
  virtual void paintCell( QPainter *p, const QColorGroup & cg, 
                          int col, int width, int align );
  
  QString duration() const;
  QString data( unsigned ) const;
  
};

#endif // SUMITEM_HH
