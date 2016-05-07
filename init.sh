#!/bin/bash
(cd src
./bootstrap
# buildtools/conf/lt~obsolete.m4 file name violates CRAN policies, rename and replace references
mv "buildtools/conf/lt~obsolete.m4" buildtools/conf/lt-obsolete.m4
find . -type f -name "Makefile.in" -o -name aclocal.m4 -exec sed -i "" -e "s/lt~obsolete\.m4/lt-obsolete\.m4/g" {} \;
./configure
(
cd sql/server
bison -y -d -p sql sql_parser.y
mv y.tab.h sql_parser.tab.h
mv y.tab.c sql_parser.tab.c
)
)

# TODO: build inlines
