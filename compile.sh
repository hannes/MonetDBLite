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
            export OS=Windows_NT #Do this for the Makefile
            ;;

        *)
            # Install MonetDB compilation dependencies
            apt-get -qq update && apt-get -qq -y install pkg-config pkgconf flex bison byacc
            if [ $1 == "macosx" ] ; then
                export OS=Darwin
            fi

    esac
fi

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
        CC=gcc
esac

# Save the previous directory
PREVDIRECTORY=`pwd`
BASEDIR=$(realpath `dirname $0`)
cd $BASEDIR

export OPT=true # Set the optimization flags
make clean && make init && make -j
if [ $? -ne 0 ] ; then
    echo "build failure"
fi

# Move the compiled library to the Gradle directory
mkdir -p monetdb-java-lite/src/main/resources/libs/$BUILDSYS
mv build/$BUILDSYS/$BUILDLIBRARY monetdb-java-lite/src/main/resources/libs/$BUILDSYS/$BUILDLIBRARY

# Windows again damm!
if [ $1 == "windows" ] ; then
    BITS=64
    cp -rf src/embedded/windows/msvcr100win$BITS/msvcr100-$BITS.dll monetdb-java-lite/src/main/resources/libs/$BUILDSYS/msvcr100.dll
fi

# If we are not on Travis then we perform the gradle build
if [ -z $TRAVIS ] ; then
    cd monetdb-java-lite
    ./gradlew build
else
    # For when compiling in a Docker container
    chmod -R 777 monetdb-java-lite
fi

cd $PREVDIRECTORY
