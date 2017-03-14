/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

#include "nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase.h"

#include "javaids.h"
#include "converters.h"
#include "embedded.h"

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase_StartDatabaseInternal
    (JNIEnv *env, jclass monetDBEmbeddedDatabase, jstring dbDirectory, jboolean silentFlag, jboolean sequentialFlag) {
    const char *dbdir_string_tmp;
    const char *loadPath_tmp;
    char *err;
    jclass exceptionCls, loaderCls;
    jfieldID pathID;
    jstring loadPath;

    dbdir_string_tmp = (*env)->GetStringUTFChars(env, dbDirectory, NULL);
    if(dbdir_string_tmp == NULL) {
        exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "System out memory!");
        return NULL;
    }

    if(!monetdb_is_initialized()) {
        //initialize the java ID fields for faster Java data loading later on
        initializeIDS(env);

        //because of the dlopen stuff, this step has to be done before the monetdb_startup call
        loaderCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBJavaLiteLoader");
        pathID = (*env)->GetStaticFieldID(env, loaderCls, "LoadedLibraryFullPath", "Ljava/lang/String;");
        loadPath = (jstring) (*env)->GetStaticObjectField(env, loaderCls, pathID);
        loadPath_tmp = (*env)->GetStringUTFChars(env, loadPath, NULL);
        if(!loadPath_tmp) {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "System went out of memory!");
            return NULL;
        }
        if(!setMonetDB5LibraryPathEmbedded(loadPath_tmp)) {
            (*env)->ReleaseStringUTFChars(env, loadPath, loadPath_tmp);
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "System went out of memory!");
            return NULL;
        }
        (*env)->ReleaseStringUTFChars(env, loadPath, loadPath_tmp);
        (*env)->DeleteLocalRef(env, loaderCls);
        (*env)->DeleteLocalRef(env, loadPath);

        err = monetdb_startup((char*) dbdir_string_tmp, (char) silentFlag, (char) sequentialFlag);
        (*env)->ReleaseStringUTFChars(env, dbDirectory, dbdir_string_tmp);
        if (err != NULL) {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
            GDKfree(err);
            return NULL;
        }
        return (*env)->NewObject(env, monetDBEmbeddedDatabase, getMonetDBEmbeddedDatabaseConstructorID(), dbDirectory,
                                    silentFlag, sequentialFlag);
    } else {
        exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "Only one MonetDB Embedded database is allowed per process!");
        return NULL;
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase_stopDatabaseInternal
    (JNIEnv *env, jobject database) {
    jclass exceptionCls;
    (void) env;
    (void) database;

    if(monetdb_is_initialized()) {
        //release the java ID fields
        releaseIDS(env);
        //release the dlopen string
        freeMonetDB5LibraryPathEmbedded();
        monetdb_shutdown();
    } else {
        exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "The MonetDB Embedded database is not running!");
    }
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase_createConnectionInternal
    (JNIEnv *env, jobject database) {
    jclass exceptionCls;
    char* error;
    Client conn = NULL;
    (void) database;

    if(monetdb_is_initialized()) {
        error = monetdb_connect(&conn);
        if(error) {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), error);
            GDKfree(error);
            return NULL;
        }
        return (*env)->NewObject(env, getMonetDBEmbeddedConnectionClassID(), getMonetDBEmbeddedConnectionConstructorID(), (jlong) conn);
    } else {
        exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "The MonetDB Embedded database is not running!");
        return NULL;
    }
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase_createJDBCEmbeddedConnectionInternal
    (JNIEnv *env, jobject database) {
    jclass exceptionCls;
    char* error;
    Client conn = NULL;
    (void) database;

    if(monetdb_is_initialized()) {
        error = monetdb_connect(&conn);
        if(error) {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), error);
            GDKfree(error);
            return NULL;
        }
        return (*env)->NewObject(env, getJDBCEmbeddedConnectionClassID(), getJDBCDBEmbeddedConnectionConstructorID(), (jlong) conn);
    } else {
        exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "The MonetDB Embedded database is not running!");
        return NULL;
    }
}
