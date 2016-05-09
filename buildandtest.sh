#!/bin/bash
export MAKEFLAGS="-j"
rm MonetDBLite_*
R CMD BUILD . && \
R CMD INSTALL --build MonetDBLite_*.tar.gz && \
R CMD INSTALL MonetDBLite_*.tgz && \
(cd tests; R -f testthat.R)
