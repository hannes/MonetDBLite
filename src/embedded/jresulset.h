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
#include "gdk.h"
#include "mal.h"
#include "mal_client.h"
#include "mal_type.h"
#include "res_table.h"

/*
 * Pedro Ferreira
 * The JResultSet holds the output of a MonetDB query to be translated into Java primitives/Objects
 */

typedef struct {
    Client conn;
    res_table *output;
    BAT** bats;
    int* digits;
    int* scales;
} JResultSet;

JResultSet* createResultSet(Client conn, res_table* output);
void freeResultSet(JResultSet* thisResultSet);

#endif //MONETDBLITE_JRESULTSET_H
