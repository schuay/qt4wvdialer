//======================================================================
// File:		pppstats.cpp
// Author:	Matthias Toussaint
// Created:	Mon Nov  6 21:46:17 CET 2000
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

#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <net/if.h>
#include <asm/types.h>
#include <linux/ppp_defs.h>
#include <iostream>
#include <net/if_ppp.h>
#include <pppstats.h>
//Added by qt3to4:
#include <QTimerEvent>

typedef struct
{
  struct ppp_stats  stats;
} DclPPPInfo;

PPPStats::PPPStats() : 
  rxTotal( 0 ),
  txTotal( 0 ),
  pppDev( 0 ),
  pppUp( false )
{
  if ((soc = socket(AF_INET, SOCK_DGRAM, 0)) < 0) 
  {
    perror("couldn't create IP socket");
    exit(1);
  }
  
  start();
}

void 
PPPStats::timerEvent( QTimerEvent * )
{
  if (!isUp()) return;
  
  DclPPPInfo        PPPInfo[1];
  struct ifreq      ifreq;

  memset( &ifreq, 0, sizeof(ifreq) );
  sprintf( ifreq.ifr_ifrn.ifrn_name, "ppp%d", pppDev );

  ifreq.ifr_ifru.ifru_data = (caddr_t) PPPInfo;

  if (ioctl (soc, SIOCGPPPSTATS, (caddr_t) & ifreq) == 0)
  {
    unsigned rxDelta = PPPInfo->stats.p.ppp_ibytes - rxTotal;
    unsigned txDelta = PPPInfo->stats.p.ppp_obytes - txTotal;
    
    rxTotal = PPPInfo->stats.p.ppp_ibytes;
    txTotal = PPPInfo->stats.p.ppp_obytes;
    
    if (rxDelta == rxTotal) rxDelta = 0;
    if (txDelta == txTotal) txDelta = 0;
    
    emit status( rxDelta, txDelta, rxTotal, txTotal );
  }
}

void
PPPStats::start()
{
  startTimer( 2000 );
}

void
PPPStats::stop()
{
  killTimers();
}

void
PPPStats::setDevice( int d )
{
  pppDev = d;
}

bool
PPPStats::isUp()
{
  struct ifreq ifreq;
 
  memset( &ifreq, 0, sizeof (ifreq));
  sprintf( ifreq.ifr_ifrn.ifrn_name, "ppp%d", pppDev );

  if (ioctl (soc, SIOCGIFFLAGS, (caddr_t) & ifreq) == 0)
  {
    if ((ifreq.ifr_flags & (IFF_UP|IFF_RUNNING)) != 0) 
    {
      if (!pppUp) 
      {
        pppUp = true;
        emit pppStatus( true );
        getRemoteAddr();
      }
           
      return true;
    }
  }
  
  if (pppUp) 
  {
    pppUp = false;
    emit pppStatus( false );
    emit remoteAddr( "n/a" );
  }
  
  return false;
}

void
PPPStats::getRemoteAddr()
{
  // Retrieve remote IP
  //
  struct ifreq ifreq;
 
  memset( &ifreq, 0, sizeof (ifreq));
  sprintf( ifreq.ifr_ifrn.ifrn_name, "ppp%d", pppDev );
  
  ioctl( soc, SIOCGIFDSTADDR, (caddr_t)&ifreq );

  struct sockaddr_in *sinp;

  sinp = (struct sockaddr_in *)&ifreq.ifr_dstaddr;

  if (sinp->sin_addr.s_addr)
    emit remoteAddr( inet_ntoa( sinp->sin_addr ) );
  else
    emit remoteAddr( "n/a" );
}
