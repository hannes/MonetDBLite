#!/bin/sh

# figure out where the sourcetree is
SRC=`pwd | sed -e 's|/cygdrive/||' -e 's|/|:/|'`"/src"

ARCH=i386
CC=C:/monetdblite/Rtools/mingw_32/bin/gcc
M64=""

BITS=$1
PYTHON=$2

echo $BITS

if [ $BITS -eq 64 ] 
then
	ARCH=x64
	CC=C:/monetdblite/Rtools/mingw_64/bin/gcc
	M64="-m64"
fi

if [ $PYTHON -eq 2 ] 
	then
	if [ $BITS -eq 32 ]
	then
		PYTHONBIN='C:/tools/python2-x86_32/python.exe'
	else
		PYTHONBIN='C:/Python27/python.exe'
	fi
else
	if [ $BITS -eq 32 ]
	then
		PYTHONBIN='C:/ProgramData/chocolatey/lib/python3-x86_32/tools/python.exe'
	else
		PYTHONBIN='C:/Python35/python.exe'
	fi
fi

rm -rf src/embedded/windows/pcre-*
unzip -o windows-buildfiles/pcre-8.37.zip -d src/embedded/windows


ADD_CFLAGS="-O3 $M64"
if [ ! -z $MONETDBLITE_DEBUG ] ; then
	echo "Using debug flags"
	ADD_CFLAGS="-O0 -g $M64"
fi

PYTHON_CFLAGS=`$PYTHONBIN python-cflags-windows.py`
PYTHON_LDFLAGS=`$PYTHONBIN python-ldflags-windows.py`

ADD_CFLAGS="$ADD_CFLAGS $PYTHON_CFLAGS"

echo $ADD_CFLAGS


# patch sedscript for build/install/library paths
sed -e "s|%CC%|$CC|" -e "s|%ADD_CFLAGS%|$ADD_CFLAGS|" -e "s|%PREFIX%|$SRC/../build|" -e "s|%SRCDIR%|$SRC|" src/embedded/windows/sedscript.tpl > src/embedded/windows/sedscript

rm src/monetdb_config.h
find src/ -name Makefile -delete

# this is copied from NT/monetdb_config.h.in in the packaging script
cp src/embedded/windows/monetdb_config.h.in src/

# pmc stands for "poor man's configure", it does something similar using the sedscript

sh src/embedded/windows/pmc.sh

# download/unpack some dependencies
cp windows-buildfiles/msvcr100-$BITS.dll msvcr100.dll


# TODO: unzip PCRE

cd src

rm config.status
touch Makefile.in config.status configure aclocal.m4 monetdb_config.h stamp-h1 monetdb_config.h.in
rm libmonetdb5.dll

make
if [ $? -ne 0 ]
then
	echo "build failure"
	exit 1
fi


OFILES=`find common gdk mal/mal mal/modules mal/optimizer sql embedded mapisplit -name "*.lo" | tr "\n" " "`

$CC $ADD_CFLAGS -shared -o libmonetdb5.dll $OFILES $PYTHON_LDFLAGS -lws2_32 -lpthread -lpsapi -Lembedded/windows/pcre-8.37/libs/$ARCH/ -lpcre 

if [ ! -s libmonetdb5.dll ]
then
	echo "library file was not created, something went wrong"
	exit 1
fi

mv libmonetdb5.dll ..

cd ../
cp src/embedded/windows/pcre-8.37/libs/$ARCH/pcre.dll .
