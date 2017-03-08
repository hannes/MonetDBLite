#!/bin/bash

set -ev

PREVDIRECTORY=`pwd`
BASEDIR=$(dirname "$0")
cd $BASEDIR

cd src
SOURCEDIR=`pwd`

case "$1" in
    windows)
        BUILDSYS=windows
        BUILDLIBRARY=libmonetdb5.dll
        CC=x86_64-w64-mingw32-gcc
        ;;

    macos)
        BUILDSYS=macos
        BUILDLIBRARY=libmonetdb5.jnilib
        CC=o64-gcc
        ;;
         
    *)
        BUILDSYS=linux
        BUILDLIBRARY=libmonetdb5.so
        CC="$CC"
esac

# Clean the previous installation data
rm -rf build/$BUILDSYS
mkdir -p build/$BUILDSYS

# Move into the build directory
bash bootstrap
cd build/$BUILDSYS

# For now we only target 64 bits
BITS=64
BUILDDIR=`pwd`

# Prepare the compilation flags depending on the target BUILD
case "$1" in
    windows)
        ADD_CFLAGS="-O3 -m64 -fPIC -DPIC -D_XPG6 -D_FORTIFY_SOURCE=2 -I/usr/x86_64-w64-mingw32/include -I../../../embedded/embedded/incwindows -Wl,-rpath=/usr/x86_64-w64-mingw32/lib"
        if [ ! -z $MONETDBLITE_DEBUG ] ; then
	     echo "Using debug flags"
	     ADD_CFLAGS="-O0 -g -m64"
        fi
        ;;

    macos)
        OPTFLAG="--enable-optimize"
        LINKFLAG=""
        if [ ! -z $MONETDBLITE_DEBUG ] ; then
	    echo "Using debug flags"
	    OPTFLAG="--enable-debug --enable-assert --enable-strict"
	    LINKFLAG="-g"
        fi
        # for osxcross
        export OSXCROSS_PKG_CONFIG_USE_NATIVE_VARIABLES=1
        CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -std=c99 -D_XPG6 -I../../../embedded/incmacos" \
        ../../configure --config-cache --enable-embedded --host=x86_64-apple-darwin13 \
        $OPTFLAG --enable-silent-rules --disable-int128
        ;;

    *)
        OPTFLAG="--enable-optimize"
        LINKFLAG=""
        if [ ! -z $MONETDBLITE_DEBUG ] ; then
	    echo "Using debug flags"
	    OPTFLAG="--enable-debug --enable-assert --enable-strict"
	    LINKFLAG="-g"
        fi
        CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -std=c99 -D_XPG6 -I../../../embedded/inclinux" \
        ../../configure --config-cache --enable-embedded \
        $OPTFLAG --enable-silent-rules --disable-int128
esac

# Prepare the compilation
case "$1" in
    windows)
        # Patch sedscript for build/install/library paths
        sed -e "s|%CC%|$CC|" -e "s|%ADD_CFLAGS%|$ADD_CFLAGS|" -e "s|%BITS%|$BITS|" -e "s|%PREFIX%|$BUILDDIR|" -e "s|%SRCDIR%|$SOURCEDIR|" ../../embedded/windows/sedscript.tpl > ../../embedded/windows/sedscript
        # Re-update the monetdb_config.h file
        rm -f ../../monetdb_config.h
        find ../../ -name "Makefile" -delete
        # This is copied from NT/monetdb_config.h.in in the packaging script
        cp ../../embedded/windows/monetdb_config.h.in ../../
        # PMC stands for "poor man's configure", it does something similar using the sedscript
        bash ../../embedded/windows/pmc.sh
        rm -f ../../config.status
        touch ../../Makefile.in ../../config.status ../../configure ../../aclocal.m4 ../../monetdb_config.h ../../stamp-h1 ../../monetdb_config.h.in
        ;;

    *)
        echo '
        ' $BUILDLIBRARY ':
	     $(CC) -shared -o ' $BUILDLIBRARY ' $(pthread_LIBS) $(zlib_LIBS) $(LIBICONV) $(MATH_LIBS) $(DL_LIBS) `find $(SUBDIRS) -name "*.o" | xargs echo` 
          all: $(BUILT_SOURCES) monetdb_config.h
	     $(MAKE) $(AM_MAKEFLAGS) all-recursive && $(MAKE) $(AM_MAKEFLAGS) ' $BUILDLIBRARY '
         ' >> Makefile
esac

# Compile the shared library
make -j

if [ $? -ne 0 ] ; then
	echo "build failure"
fi

# On Windows we still have on extra step...
if [ $1 == "windows" ] ; then
    OFILES=`find common gdk mal/mal mal/modules mal/optimizer sql embedded mapisplit -name "*.lo" | tr "\n" " "`
    $CC $ADD_CFLAGS -shared -fPIC -Wl,--export-all-symbols -o $BUILDLIBRARY $OFILES -lws2_32 -lpthread -lpsapi
    if [ ! -s $BUILDLIBRARY ] ; then
	echo "library file was not created, something went wrong"
    fi
fi

# Move the compiled library to the Gradle directory
mkdir -p ../../../monetdb-java-lite/src/main/resources/libs/$BUILDSYS
mv $BUILDLIBRARY ../../../monetdb-java-lite/src/main/resources/libs/$BUILDSYS

# Windows again damm!
if [ $1 == "windows" ] ; then
    mv ../../embedded/windows/msvcr100.win$BITS/msvcr100-$BITS.dll ../../../monetdb-java-lite/src/main/resources/libs/windows/msvcr100.dll
fi

# If we are not on Travis then we perform the gradle build
if [ -z $TRAVIS ] ; then
    cd ../../../monetdb-java-lite
    ./gradlew build
fi

cd $PREVDIRECTORY
