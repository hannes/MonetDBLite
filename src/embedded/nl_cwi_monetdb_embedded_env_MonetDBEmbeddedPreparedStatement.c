/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_env_MonetDBEmbeddedPreparedStatement.h"

#include "embedded.h"

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedPreparedStatement_freePreparedStatement
    (JNIEnv *env, jobject preparedStatement, jlong connectionPointer, jlong prepareStatementID) {
    (void) env;
    (void) preparedStatement;
    sendReleaseCommand((Client) connectionPointer, prepareStatementID);
}
