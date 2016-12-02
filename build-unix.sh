#!/bin/sh


OPTFLAG="--enable-optimize"
LINKFLAG="-g"
if [ ! -z $MONETDBLITE_DEBUG ] ; then
	echo "Using debug flags"
	OPTFLAG="--enable-debug --enable-assert"
	LINKFLAG="-g"
fi

cd src

CC="$CC" CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS $LINKFLAG -D_XPG6 $MONETDBLITE_PYTHON_INCLUDE_FLAGS" \
./configure --enable-embedded  \
--disable-fits --disable-geom --disable-rintegration --disable-pyintegration --disable-gsl --disable-netcdf \
--disable-odbc --disable-console --enable-embedded-py=yes \
--without-openssl --without-uuid --without-curl --without-bz2 --without-lzma --without-libxml2 \
--without-python2 --without-python3 --without-unixodbc --disable-mapi \
--without-samtools --without-sphinxclient --without-geos --without-samtools --without-readline \
$OPTFLAG --enable-silent-rules --disable-int128

# always rebuild the embedded directory because we might be linking with a different python version
cd embedded
make clean
cd ..

touch Makefile.in config.status configure aclocal.m4 monetdb_config.h stamp-h1 monetdb_config.h.in

echo '

libmonetdb5$(SOEXT):
	$(CC) -shared -o libmonetdb5$(SOEXT) $(pthread_LIBS) $(pcre_LIBS) $(zlib_LIBS) $(LIBICONV) $(MATH_LIBS) $(DL_LIBS) '$MONETDBLITE_PYTHON_LINK_FLAGS' `find $(SUBDIRS) -name "*.o" | xargs echo` 

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
mv libmonetdb5$SOEXT ..
cd ..



