#include <sumitem.h>
#include <qpainter.h>

SumItem::SumItem( Q3ListView *list, const QString & str ) :
  Q3ListViewItem( list, str ),
  m_time( 0 ),
  m_upload( 0 ),
  m_download( 0 )
{
}

SumItem::~SumItem()
{
}

void
SumItem::paintCell( QPainter *p, const QColorGroup & cg, 
                    int col, int width, int align )
{
  p->save();
  
  switch (col)
  {
  case 0:
  case 1:
  case 2:
    Q3ListViewItem::paintCell( p, cg, col, width, align );
    break;
    
  case 3:
    p->setPen( Qt::darkRed );
    p->fillRect( 0, 0, width, height(), cg.base() );
    p->drawText( 0, 0, width, height(), align, duration() );
    break;
    
  case 4:
    p->setPen( Qt::darkRed );
    p->fillRect( 0, 0, width, height(), cg.base() );
    p->drawText( 0, 0, width, height(), align, data( m_download ) );
    break;
    
  case 5:
    p->setPen( Qt::darkRed );
    p->fillRect( 0, 0, width, height(), cg.base() );
    p->drawText( 0, 0, width, height(), align, data( m_upload ) );
    break;
  }
  p->restore();    
}

QString
SumItem::duration() const
{
  QString tmp;
  unsigned dur = m_time;
  
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
SumItem::data( unsigned bytes ) const
{
  static char *unit[3] = { "bytes", "KB", "MB" };
  int   ui = 0;
  QString tmp;
  
  double D = (double)bytes;
  
  while (D > 1024. && ui < 2)
  {
    D /= 1024.;
    ui++;
  }
  
  if (ui == 0)
  {
    tmp.sprintf( "%d bytes", bytes );
  }
  else
  {
    tmp.sprintf( "%.2f %s", D, unit[ui] );
  } 
  
  return tmp;
}
