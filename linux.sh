#!/bin/bash

PREVDIRECTORY=`pwd`

BASEDIR=$(dirname "$0")

cd $BASEDIR

OPTFLAG="--enable-optimize"
LINKFLAG=""
if [ ! -z $MONETDBLITE_DEBUG ] ; then
	echo "Using debug flags"
	OPTFLAG="--enable-debug --enable-assert"
	LINKFLAG="-g"
fi

rm -rf ./build
mkdir build
mkdir -p monetdb-java-lite/src/main/resources/libs/linux
sh ./src/bootstrap
cd build

CC="$CC" CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -D_XPG6" \
../src/configure --enable-embedded  \
--disable-fits --disable-geom --disable-rintegration --disable-pyintegration --disable-gsl --disable-netcdf \
--disable-odbc --disable-console  \
--without-openssl --without-uuid --without-curl --without-bz2 --without-lzma --without-libxml2 \
--without-python2 --without-python3 --without-unixodbc --disable-mapi \
--without-samtools --without-sphinxclient --without-geos --without-samtools --without-readline \
$OPTFLAG --enable-silent-rules --disable-int128

echo '
libmonetdb5.so:
	$(CC) -shared -o libmonetdb5.so $(pthread_LIBS) $(pcre_LIBS) $(zlib_LIBS) $(LIBICONV) $(MATH_LIBS) $(DL_LIBS) `find $(SUBDIRS) -name "*.o" | xargs echo` 
all: $(BUILT_SOURCES) monetdb_config.h
	$(MAKE) $(AM_MAKEFLAGS) all-recursive && $(MAKE) $(AM_MAKEFLAGS) libmonetdb5.so
' >> Makefile

make -j

cd ..

mv ./build/libmonetdb5.so ./monetdb-java-lite/src/main/resources/libs/linux/libmonetdb5.so

cd ./monetdb-java-lite

rm -rf output

mkdir -p output/jars

hg clone https://dev.monetdb.org/hg/monetdb-java/ -r embedded

cd monetdb-java

make -j

mv jars/monetdb-jdbc-2.24.jar ../output/jars

cd ..

rm -rf monetdb-java

gradle build

mv build/libs/monetdb-java-lite-2.24.jar output/jars/

rm -rf build

gradle javadocJar

mv build/docs/javadoc output/

rm -rf build

#gradle uploadArchives

cd $PREVDIRECTORY

