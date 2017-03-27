#!/bin/bash

PREFIX=/tmp/monetdblite-init-stage
SRCDIR=`pwd`

rm -r $PREFIX
mkdir -p $PREFIX/install
mkdir -p $PREFIX/build

(
cd src 
./bootstrap
./configure
make distclean
./bootstrap
# buildtools/conf/lt~obsolete.m4 file name violates CRAN policies, rename and replace references
mv "buildtools/conf/lt~obsolete.m4" buildtools/conf/lt-obsolete.m4
find . \( -name "Makefile.in" -or -name "aclocal.m4" \) -exec sed -i "" -e "s/lt~obsolete\.m4/lt-obsolete\.m4/g" {} \;
)

cd $PREFIX/build

$SRCDIR/src/configure --prefix=$PREFIX/install \
--disable-fits --disable-geom --disable-rintegration --disable-gsl --disable-netcdf \
--disable-odbc --disable-console \
--without-openssl --without-uuid --without-curl --without-bz2 --without-lzma --without-libxml2 \
--without-python2 --without-python3 --without-unixodbc --disable-mapi \
--without-samtools --without-sphinxclient --without-geos --without-samtools --without-readline \
--enable-debug --enable-silent-rules --disable-assert --disable-strict --disable-int128

rm $SRCDIR/src/sql/server/sql_parser.tab.*

make -j install

cp sql/server/sql_parser.tab.h $SRCDIR/src/sql/server/
cp sql/server/sql_parser.tab.c $SRCDIR/src/sql/server/

python $SRCDIR/src/embedded/inlined_scripts.py $PREFIX/install/lib/monetdb5/ $SRCDIR/src/embedded/inlined_scripts.c
