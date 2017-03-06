/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#ifndef MONETDBLITE_JRESULTSET_H
#define MONETDBLITE_JRESULTSET_H

#include "monetdb_config.h"
#include "res_table.h"
#include "mal_type.h"

typedef struct {
    res_table *output;
    BAT** bats;
    int* digits;
    int* scales;
} JResultSet;

JResultSet* createResultSet(res_table* output);
void freeResultSet(JResultSet* thisResultSet);

#endif //MONETDBLITE_JRESULTSET_H
