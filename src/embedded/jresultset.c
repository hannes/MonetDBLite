/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "jresulset.h"
#include "monetdb_config.h"
#include "embedded.h"
#include "gdk.h"
#include "mal.h"
#include "mal_client.h"
#include "mal_type.h"
#include "res_table.h"

JResultSet* createResultSet(Client conn, res_table* output) {
    JResultSet* thisResultSet = (JResultSet*) GDKmalloc(sizeof(JResultSet));
    int numberOfColumns = output->nr_cols, *quickerDigits, *quickerScales, i;
    BAT** dearBats;
    res_col col;
    if(thisResultSet) {
        thisResultSet->conn = conn;
        thisResultSet->output = output;
        if(output->nr_cols > 0) {
            thisResultSet->bats = (BAT**) GDKmalloc(sizeof(BAT*) * numberOfColumns);
            thisResultSet->digits = (int*) GDKmalloc(sizeof(int) * numberOfColumns);
            thisResultSet->scales = (int*) GDKmalloc(sizeof(int) * numberOfColumns);

            if(thisResultSet->bats == NULL || thisResultSet->digits == NULL || thisResultSet->scales == NULL) {
                if(thisResultSet->bats) {
                    GDKfree(thisResultSet->bats);
                }
                if(thisResultSet->digits) {
                    GDKfree(thisResultSet->digits);
                }
                if(thisResultSet->scales) {
                    GDKfree(thisResultSet->scales);
                }
                GDKfree(thisResultSet);
                thisResultSet = NULL;
            } else {
                dearBats = thisResultSet->bats;
                quickerDigits = thisResultSet->digits;
                quickerScales = thisResultSet->scales;
                for (i = 0; i < numberOfColumns; i++) {
                    col = output->cols[i];
                    dearBats[i] = BATdescriptor(col.b);
                    quickerDigits[i] = (int) col.type.digits;
                    quickerScales[i] = (int) col.type.scale;
                }
            }
        } else {
            thisResultSet->bats = NULL;
            thisResultSet->digits = NULL;
            thisResultSet->scales = NULL;
        }
    }
    return thisResultSet;
}

void freeResultSet(JResultSet* thisResultSet) {
    int numberOfColumns, i;
    BAT **dearBats;
    if(thisResultSet) {
        if(thisResultSet->bats) {
            dearBats = thisResultSet->bats;
            if(thisResultSet->output) {
                numberOfColumns = thisResultSet->output->nr_cols;
                for (i = 0; i < numberOfColumns; i++) {
                    BBPunfix(dearBats[i]->batCacheid);
                }
            }
            GDKfree(dearBats);
            thisResultSet->bats = NULL;
        }
        if(thisResultSet->digits) {
            GDKfree(thisResultSet->digits);
            thisResultSet->digits = NULL;
        }
        if(thisResultSet->scales) {
            GDKfree(thisResultSet->scales);
            thisResultSet->scales = NULL;
        }
        if(thisResultSet->output) {
            monetdb_cleanup_result(thisResultSet->conn, thisResultSet->output);
            thisResultSet->output = NULL;
        }
        GDKfree(thisResultSet);
    }
}
