#!/bin/bash
(cd src
./bootstrap
# TODO: fix this
# mv "buildtools/conf/lt~obsolete.m4" buildtools/conf/lt-obsolete.m4
# find . -name "Makefile.in" -exec sed -e "s/lt~obsolete\.m4/lt-obsolete\.m4/g" {} \; -i
./configure
(
cd sql/server
bison -y  -d -p sql sql_parser.y
mv y.tab.h sql_parser.tab.h
mv y.tab.c sql_parser.tab.c
)
)

# TODO: build inlines
