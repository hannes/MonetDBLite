#!/bin/bash

# this assumes a git remote like this
# hg	hg::https://dev.monetdb.org/hg/MonetDB/
# and this hg extension
# https://github.com/fingolfin/git-remote-hg
git pull && \
git pull hg branches/Dec2016
git status --porcelain | awk '{if ($1=="DU") print $2}' | xargs git rm # && \
#git commit

