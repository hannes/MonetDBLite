#!/bin/sh


OPTFLAG="--enable-optimize"
LINKFLAG=""
if [ ! -z $MONETDBLITE_DEBUG ] ; then
	echo "Using debug flags"
	OPTFLAG="--enable-debug --enable-assert"
	LINKFLAG="-g"
fi

mkdir -p build
cd build
rm Makefile


CC="$CC" CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -D_XPG6" \
../src/configure --enable-embedded  \
--disable-fits --disable-geom --disable-rintegration --disable-pyintegration --disable-gsl --disable-netcdf \
--disable-odbc --disable-console  \
--without-openssl --without-uuid --without-curl --without-bz2 --without-lzma --without-libxml2 \
--without-python2 --without-python3 --without-unixodbc --disable-mapi \
--without-samtools --without-sphinxclient --without-geos --without-samtools --without-readline \
$OPTFLAG --enable-silent-rules --disable-int128

echo '

libmonetdb5$(SOEXT):
	$(CC) -shared -o libmonetdb5$(SOEXT) $(pthread_LIBS) $(pcre_LIBS) $(zlib_LIBS) $(LIBICONV) $(MATH_LIBS) $(DL_LIBS) `find $(SUBDIRS) -name "*.o" | xargs echo` 

all: $(BUILT_SOURCES) monetdb_config.h
	$(MAKE) $(AM_MAKEFLAGS) all-recursive && $(MAKE) $(AM_MAKEFLAGS) libmonetdb5$(SOEXT)

' >> Makefile

SOEXT=`grep "SOEXT =" Makefile | head -n 1 | sed "s/SOEXT *= //"`

rm libmonetdb5$SOEXT

make -j

if [ ! -s libmonetdb5$SOEXT ]
then
	echo "library file was not created, something went wrong"
	exit 1
fi

cd ..

gcc test.c -Ibuild -Isrc -Isrc/common/options -Isrc/common/stream -Isrc/gdk -Isrc/mal/mal -Isrc/mal/modules -Isrc/sql/include -Isrc/sql/backends/monet5 -Isrc/sql/server -Isrc/sql/common -Isrc/sql/storage  -Isrc/embedded -lmonetdb5 -Lbuild -o test

DYLD_LIBRARY_PATH=build LD_LIBRARY_PATH=build ./test


