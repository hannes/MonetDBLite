/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#ifndef MONETDBLITE_CHECKNULLS_H
#define MONETDBLITE_CHECKNULLS_H

#include "monetdb_config.h"
#include "mal_type.h"
#include <jni.h>

void checkBooleanNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkTinyintNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkSmallintNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkIntNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkBigintNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkRealNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkDoubleNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);

void checkDateNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkTimeNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkTimestampNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);

void checkStringNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);
void checkBlobNulls(JNIEnv* env, jbooleanArray input, jint size, BAT* b);

#endif //MONETDBLITE_CHECKNULLS_H
