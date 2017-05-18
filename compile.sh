#!/bin/bash

# Show all the build steps, plus exist when we find an error
set -ev

if [ ! -z $TRAVIS  ] ; then
    case "$1" in
        windows)
            # Fix broken header files
            \cp src/embedded/windows/mingwheaders/intrin.h /usr/x86_64-w64-mingw32/sys-root/mingw/include/intrin.h
            \cp src/embedded/windows/mingwheaders/stdlib.h /usr/x86_64-w64-mingw32/sys-root/mingw/include/stdlib.h
            \cp src/embedded/windows/mingwheaders/time.h /usr/x86_64-w64-mingw32/sys-root/mingw/include/time.h
            \cp src/embedded/windows/mingwheaders/intrin-impl.h /usr/x86_64-w64-mingw32/sys-root/mingw/include/psdk_inc/intrin-impl.h
            ;;

        *)
            # Install MonetDB compilation dependencies
            apt-get -qq update && apt-get -qq -y install pkg-config pkgconf flex bison byacc
    esac
fi

# Save the previous directory
PREVDIRECTORY=`pwd`
BASEDIR=$(realpath `dirname $0`)
cd $BASEDIR

# For now we only target 64 bits
BITS=64

cd src
SOURCEDIR=`pwd`

# Set the compiler to use, plus the name of the library
case "$1" in
    windows)
        BUILDSYS=windows
        BUILDLIBRARY=libmonetdb5.dll
        CC=x86_64-w64-mingw32-gcc
        ;;

    macosx)
        BUILDSYS=macosx
        BUILDLIBRARY=libmonetdb5.dylib
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
        ADD_CFLAGS="-O3 -m64 -std=c99 -DPIC -D_XPG6 -I$SOURCEDIR/embedded/incwindows"
        if [ ! -z $MONETDBLITE_DEBUG ] ; then
            echo "Using debug flags"
            ADD_CFLAGS="-O0 -g -m64"
        fi
        ;;

    macosx)
        OPTFLAG="--enable-optimize"
        LINKFLAG=""
        if [ ! -z $MONETDBLITE_DEBUG ] ; then
            echo "Using debug flags"
            OPTFLAG="--enable-debug --enable-assert --enable-strict"
            LINKFLAG="-g"
        fi
        CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -std=c99 -fPIC -DPIC -D_XPG6 -I$SOURCEDIR/embedded/incmacosx" \
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

# Do the compilation
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
        OFILES=`find common gdk mal/mal mal/modules mal/optimizer sql embedded -name "*.lo" | tr "\n" " "`
        $CC $ADD_CFLAGS -shared -fPIC -Wl,--export-all-symbols -o $BUILDDIR/$BUILDLIBRARY $OFILES -lws2_32 -lpthread -lpsapi
        if [ ! -s $BUILDDIR/$BUILDLIBRARY ] ; then
            echo "library file was not created, something went wrong"
        fi
        ;;

    *)
        # For POSIX we just add a new rule for the main Makefile
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
    cp -rf $SOURCEDIR/embedded/windows/msvcr100win$BITS/msvcr100-$BITS.dll monetdb-java-lite/src/main/resources/libs/windows/msvcr100.dll
    cd $SOURCEDIR
    make distclean
    cd $BASEDIR
fi

# For when compiling in a Docker container
chmod -R 777 monetdb-java-lite

# If we are not on Travis then we perform the gradle build
if [ -z $TRAVIS ] ; then
    cd monetdb-java-lite
    ./gradlew build
fi

cd $PREVDIRECTORY
