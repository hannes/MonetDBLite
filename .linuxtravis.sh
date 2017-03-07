#!/bin/bash

set -ev

# Backup the cloned repository, because here we will compile for both Linux and Windows
cd ..
cp MonetDBLite MonetDBLiteWindows
mkdir -p libs/{linux,windows}

# Do the Linux compilation
cd MonetDBLite
sh linux.sh
cd ..
cp MonetDBLite/monetdb-java-lite/src/main/resources/libs/linux libs/linux

# Do the Windows compilation
cd MonetDBLiteWindows
sudo apt-get install -qq gcc-mingw-w64
sh windows.sh
cd ..
cp MonetDBLiteWindows/monetdb-java-lite/src/main/resources/libs/windows libs/windows

# On the deploy phase we will upload the libs

