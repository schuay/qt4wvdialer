# Maintainer: Jakob Gruber (jakob dot gruber at kabelnet dot at)

_pkgname="qt4wvdialer" 
pkgname="$_pkgname-git"
pkgver=0.4.4
pkgdesc="A simple graphical frontend to wvdial, ported to Qt4."
pkgrel=1
arch=('i686' 'x86_64')
url="http://github.com/schuay/$_pkgname"
license=('GPL')
depends=('qt' 'wvdial')
makedepends=('git')
source=($_pkgname.desktop)
md5sums=('59ed85ea8bbff7aaa382000472519287')


build() {

  #clean source directory
  rm -rf $srcdir/*

  #git checkout
  cd $srcdir
  git clone git://github.com/schuay/$_pkgname.git
  cd $srcdir/$_pkgname

  QTDIR=/usr/share/qt ./configure --prefix=/usr
  make || return 1

  install -D -m755 bin/qtwvdialer $pkgdir/usr/bin/qtwvdialer
  install -D -m644 src/qtwvdialer.png $pkgdir/usr/share/icons/hicolor/32x32/
  install -D -m644 $startdir/$_pkgname.desktop $pkgdir/usr/share/applications/$_pkgname.desktop
}

