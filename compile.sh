#!/bin/bash

set -ev

# for osxcross on the dockerfile
if [ ! -z $TRAVIS  ] && [ $1 == "macos" ] ; then
    apt-get -qq update && apt-get -qq -y install pkg-config pkgconf
fi

PREVDIRECTORY=`pwd`
BASEDIR=$(realpath `dirname $0`)
cd $BASEDIR

# For now we only target 64 bits
BITS=64

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
BUILDDIR=`pwd`

# Prepare the compilation flags depending on the target BUILD
case "$1" in
    windows)
        ADD_CFLAGS="-O3 -m64 -DPIC -D_XPG6 -D_FORTIFY_SOURCE=2 -I/usr/x86_64-w64-mingw32/include -I$SOURCEDIR/embedded/incwindows -Wl,-rpath=/usr/x86_64-w64-mingw32/lib"
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
        CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -std=c99 -fPIC -DPIC -D_XPG6 -I$SOURCEDIR/embedded/incmacos" \
        $SOURCEDIR/configure --config-cache --enable-embedded --host=x86_64-apple-darwin13 \
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
        CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -std=c99 -fPIC -DPIC -D_XPG6 -I$SOURCEDIR/embedded/inclinux" \
        $SOURCEDIR/configure --config-cache --enable-embedded \
        $OPTFLAG --enable-silent-rules --disable-int128
esac

# Prepare the compilation
case "$1" in
    windows)
        # On Windows the compilation is more complicated...
        cd $SOURCEDIR
        # Patch sedscript for build/install/library paths
        sed -e "s|%CC%|$CC|" -e "s|%ADD_CFLAGS%|$ADD_CFLAGS|" -e "s|%BITS%|$BITS|" -e "s|%PREFIX%|$BUILDDIR|" -e "s|%SRCDIR%|$SOURCEDIR|" embedded/windows/sedscript.tpl > embedded/windows/sedscript
        # Re-update the monetdb_config.h file
        rm -f monetdb_config.h
        find . -name "Makefile" -delete
        # This is copied from NT/monetdb_config.h.in in the packaging script
        cp embedded/windows/monetdb_config.h.in .
        # PMC stands for "poor man's configure", it does something similar using the sedscript
        bash embedded/windows/pmc.sh
        rm -f config.status
        touch Makefile.in config.status configure aclocal.m4 monetdb_config.h stamp-h1 monetdb_config.h.in
        make -j
        if [ $? -ne 0 ] ; then
	        echo "build failure"
        fi
        OFILES=`find common gdk mal/mal mal/modules mal/optimizer sql embedded mapisplit -name "*.lo" | tr "\n" " "`
        $CC $ADD_CFLAGS -shared -fPIC -Wl,--export-all-symbols -o $BUILDDIR/$BUILDLIBRARY $OFILES -lws2_32 -lpthread -lpsapi
        if [ ! -s $BUILDLIBRARY ] ; then
	        echo "library file was not created, something went wrong"
        fi
        ;;

    *)
        echo '
        ' $BUILDLIBRARY ':
	     $(CC) -shared -o ' $BUILDLIBRARY ' $(pthread_LIBS) $(zlib_LIBS) $(LIBICONV) $(MATH_LIBS) $(DL_LIBS) `find $(SUBDIRS) -name "*.o" | xargs echo` 
          all: $(BUILT_SOURCES) monetdb_config.h
	     $(MAKE) $(AM_MAKEFLAGS) all-recursive && $(MAKE) $(AM_MAKEFLAGS) ' $BUILDLIBRARY '
         ' >> Makefile
        make -j
        if [ $? -ne 0 ] ; then
	        echo "build failure"
        fi
esac

# Move the compiled library to the Gradle directory
cd $BASEDIR
mkdir -p monetdb-java-lite/src/main/resources/libs/$BUILDSYS
mv $BUILDDIR/$BUILDLIBRARY monetdb-java-lite/src/main/resources/libs/$BUILDSYS

# Windows again damm!
if [ $1 == "windows" ] ; then
    cp -rf $SOURCEDIR/embedded/windows/msvcr100.win$BITS/msvcr100-$BITS.dll monetdb-java-lite/src/main/resources/libs/windows/msvcr100.dll
    cd $SOURCEDIR
    make distclean
    cd $BASEDIR
fi

# If we are not on Travis then we perform the gradle build
if [ -z $TRAVIS ] ; then
    cd monetdb-java-lite
    ./gradlew build
fi

cd $PREVDIRECTORY
