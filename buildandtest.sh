#!/bin/bash
export MAKEFLAGS="-j"
R CMD BUILD . && \
R CMD INSTALL MonetDBLite_*.tar.gz && \
(cd tests; R -f testthat.R)
