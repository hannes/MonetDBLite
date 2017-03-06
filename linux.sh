#!/bin/bash

set -ev

PREVDIRECTORY=`pwd`
BASEDIR=$(dirname "$0")
cd $BASEDIR

# Prepare the compilation flags
OPTFLAG="--enable-optimize"
LINKFLAG=""
if [ ! -z $MONETDBLITE_DEBUG ] ; then
	echo "Using debug flags"
	OPTFLAG="--enable-debug --enable-assert --enable-strict"
	LINKFLAG="-g"
fi

# Remove previous instalations data
rm -rf build
rm -rf monetdb-java-lite/build

# Recreate the directories
mkdir -p build
mkdir -p monetdb-java-lite/src/main/resources/libs/linux
mkdir -p src/embedded/incjni/

# Copy the Linux JNI headers
cp src/embedded/inclinux/* src/embedded/incjni/

# Compile the shared library
cd src
sh ./bootstrap
cd ../build

# Prepare the compilation flags
CC="$CC" CFLAGS="$CPPFLAGS $CFLAGS $CPICFLAGS -D_XPG6" \
../src/configure --config-cache --enable-embedded \
$OPTFLAG --enable-silent-rules --disable-int128

echo '
libmonetdb5.so:
	$(CC) -shared -o libmonetdb5.so $(pthread_LIBS) $(zlib_LIBS) $(LIBICONV) $(MATH_LIBS) $(DL_LIBS) `find $(SUBDIRS) -name "*.o" | xargs echo` 
all: $(BUILT_SOURCES) monetdb_config.h
	$(MAKE) $(AM_MAKEFLAGS) all-recursive && $(MAKE) $(AM_MAKEFLAGS) libmonetdb5.so
' >> Makefile

make -j

if [ $? -ne 0 ]
then
	echo "build failure"
fi

# Move the shared library to the resources directory
cd ..
cp build/libmonetdb5.so monetdb-java-lite/src/main/resources/libs/linux/libmonetdb5.so

# Build the jar with gradle
cd monetdb-java-lite
gradle build

cd $PREVDIRECTORY

