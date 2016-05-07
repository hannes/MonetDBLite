#!/bin/bash
export MAKEFLAGS="-j"
rm MonetDBLite_*.tar.gz
R CMD BUILD . && \
R CMD INSTALL MonetDBLite_*.tar.gz && \
(cd tests; R -f testthat.R)
