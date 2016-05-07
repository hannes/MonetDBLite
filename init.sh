#!/bin/bash
(cd src
./bootstrap
./configure
(
cd sql/server
bison -y -d -p sql sql_parser.y
mv y.tab.h sql_parser.tab.h
mv y.tab.c sql_parser.tab.c
)

#fixme
# buildtools/conf/lt~obsolete.m4 file name violates CRAN policies, rename and replace references

# mv "buildtools/conf/lt~obsolete.m4" buildtools/conf/lt-obsolete.m4
# find . -type f -name "Makefile.in" -exec sed -i "" -e "s/lt~obsolete\.m4/lt-obsolete\.m4/g" {} \;

)

# TODO: build inlines
