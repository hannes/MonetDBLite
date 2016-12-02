# figure out where the sourcetree is
SRC=`pwd | sed -e 's|/cygdrive/||' -e 's|/|:/|'`"/src"

# figure out bitness
BITS=64
ARCH=x64
# if [ "$R_ARCH" = "/i386" ] 
# then
# 	BITS=32
# fi
MONETDBLITE_DEBUG=YES


#TODO: add 64 bit flag to cflags if architecure requires it

CC=C:/Rtools/mingw_64/bin/gcc
ADD_CFLAGS="-O3 -m64"
if [ ! -z $MONETDBLITE_DEBUG ] ; then
	echo "Using debug flags"
	ADD_CFLAGS="-O0 -g -m64"
fi

PYTHON_CFLAGS=`c:/Python27/python.exe python-cflags-windows.py`
PYTHON_LDFLAGS=`c:/Python27/python.exe python-ldflags-windows.py`

ADD_CFLAGS="$ADD_CFLAGS $PYTHON_CFLAGS"


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

make -j
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



$CC -m64 test.c -Isrc/ -Isrc/common/options -Isrc/common/stream -Isrc/gdk -Isrc/mal/mal -Isrc/mal/modules/atoms -Isrc/mal/modules/mal -Isrc/sql/include -Isrc/sql/backends/monet5 -Isrc/sql/server -Isrc/sql/common -Isrc/sql/storage  -Isrc/embedded -lmonetdb5 -L. -o test
./test
