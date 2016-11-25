#!/bin/sh
cd src

OPTFLAG="--enable-optimize"
LINKFLAG="-g"
if [ ! -z $MONETDBLITE_DEBUG ] ; then
	echo "Using debug flags"
	OPTFLAG="--enable-debug"
	LINKFLAG="-g"
fi

CC="$CC" CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -D_XPG6" \
./configure --enable-embedded \
--disable-fits --disable-geom --disable-rintegration --disable-gsl --disable-netcdf \
--disable-jdbc --disable-merocontrol --disable-odbc --disable-console --disable-microhttpd \
--without-openssl --without-uuid --without-curl --without-bz2 --without-lzma --without-libxml2 \
--without-perl --without-python2 --without-python3 --without-unixodbc --disable-mapi \
--without-samtools --without-sphinxclient --without-geos --without-samtools --without-readline \
$OPTFLAG --enable-silent-rules --disable-int128


# TODO: support .so

touch Makefile.in config.status configure aclocal.m4 monetdb_config.h stamp-h1 monetdb_config.h.in

echo '

libmonetdb5$(SOEXT):
	$(CC) -shared -o libmonetdb5$(SOEXT) $(pthread_LIBS) $(pcre_LIBS) $(zlib_LIBS) $(LIBICONV) `find $(SUBDIRS) -name "*.o" | xargs echo` 

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

mv src/libmonetdb5$SOEXT .

gcc test.c -Isrc/ -Isrc/common/options -Isrc/common/stream -Isrc/gdk -Isrc/mal/mal -Isrc/mal/modules/atoms -Isrc/mal/modules/mal -Isrc/sql/include -Isrc/sql/backends/monet5 -Isrc/sql/server -Isrc/sql/common -Isrc/sql/storage  -Isrc/embedded -lmonetdb5 -L. -o test
./test


