#!/bin/bash
export MAKEFLAGS="-j"
export MONETDBLITE_DEBUG=42
rm MonetDBLite_*
R CMD build . && \
R CMD INSTALL --build MonetDBLite_*.tar.gz && \
R CMD INSTALL MonetDBLite_*.tgz && \
(cd tests; R  --slave -f testthat.R) && \
(cd ~/source/dbplyr/tests && git pull && R --slave -f testthat.R)
