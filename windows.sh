#!/bin/bash

PREVDIRECTORY=`pwd`

BASEDIR=$(dirname "$0")

cd $BASEDIR

# figure out where the sourcetree is
SRC=`pwd | sed -e 's|/cygdrive/||'`"/src"

# figure out bitness
BITS=64 # we compile for 64 bits only for now

CC=gcc
ADD_CFLAGS="-O3 -m64"
if [ ! -z $MONETDBLITE_DEBUG ] ; then
	echo "Using debug flags"
	ADD_CFLAGS="-O0 -g -m64"
fi

rm -rf monetdb-java-lite/build
mkdir -p monetdb-java-lite/src/main/resources/libs/windows

# a bit of cheating hehehe
cp src/embedded/incwindows/* src/embedded/inclinux/

# patch sedscript for build/install/library paths
sed -e "s|%CC%|$CC|" -e "s|%ADD_CFLAGS%|$ADD_CFLAGS|" -e "s|%BITS%|$BITS|" -e "s|%PREFIX%|$SRC/../build|" -e "s|%SRCDIR%|$SRC|" src/embedded/windows/sedscript.tpl > src/embedded/windows/sedscript

rm -f src/monetdb_config.h

find src/ -name "Makefile" -delete

# this is copied from NT/monetdb_config.h.in in the packaging script
cp src/embedded/windows/monetdb_config.h.in src/

# pmc stands for "poor man's configure", it does something similar using the sedscript
sh src/embedded/windows/pmc.sh

cd src

rm -f config.status
touch Makefile.in config.status configure aclocal.m4 monetdb_config.h stamp-h1 monetdb_config.h.in
rm -f libmonetdb5.dll

make -j

if [ $? -ne 0 ]
then
	echo "build failure"
	exit 1
fi

OFILES=`find common gdk mal/mal mal/modules mal/optimizer sql embedded mapisplit -name "*.lo" | tr "\n" " "`

$CC $ADD_CFLAGS -shared -o libmonetdb5.dll $OFILES -lws2_32 -lpthread -lpsapi -Lembedded/windows/pcre-8.37.win$BITS-vs2014/lib/ -lpcre

if [ ! -s libmonetdb5.dll ]
then
	echo "library file was not created, something went wrong"
	exit 1
fi

cd ..

#cp src/embedded/windows/msvcr100-$BITS.dll monetdb-java-lite/src/main/resources/libs/windows/msvcr100.dll
cp src/embedded/windows/pcre-8.37.win$BITS-vs2014/bin/pcre.dll monetdb-java-lite/src/main/resources/libs/windows/pcre.dll
mv src/libmonetdb5.dll monetdb-java-lite/src/main/resources/libs/windows/libmonetdb5.dll

cd monetdb-java-lite

gradle build

cd $PREVDIRECTORY
