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

static int java_minimums_initialized = 0;

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase_StartDatabaseInternal
    (JNIEnv *env, jclass monetDBEmbeddedDatabase, jstring dbDirectory, jboolean silentFlag, jboolean sequentialFlag) {
    const char *dbdir_string_tmp = (*env)->GetStringUTFChars(env, dbDirectory, NULL);

    if(!monetdb_is_initialized()) {
        if(!java_minimums_initialized) {
            //initialize the minimum values for the null mappings
            jclass byteCls = (*env)->FindClass(env, "java/lang/Byte");
            jfieldID byteID = (*env)->GetStaticFieldID(env, byteCls, "MIN_VALUE", "B");
            jbyte m1 = (*env)->GetStaticByteField(env, byteCls, byteID);

            jclass shortCls = (*env)->FindClass(env, "java/lang/Short");
            jfieldID shortID = (*env)->GetStaticFieldID(env, shortCls, "MIN_VALUE", "S");
            jshort m2 = (*env)->GetStaticShortField(env, shortCls, shortID);

            jclass intCls = (*env)->FindClass(env, "java/lang/Integer");
            jfieldID intID = (*env)->GetStaticFieldID(env, intCls, "MIN_VALUE", "I");
            jint m3 = (*env)->GetStaticIntField(env, intCls, intID);

            jclass longCls = (*env)->FindClass(env, "java/lang/Long");
            jfieldID longID = (*env)->GetStaticFieldID(env, longCls, "MIN_VALUE", "J");
            jlong m4 = (*env)->GetStaticLongField(env, longCls, longID);

            jclass floatCls = (*env)->FindClass(env, "java/lang/Float");
            jfieldID floatID = (*env)->GetStaticFieldID(env, floatCls, "MIN_VALUE", "F");
            jfloat m5 = (*env)->GetStaticFloatField(env, floatCls, floatID);

            jclass doubleCls = (*env)->FindClass(env, "java/lang/Double");
            jfieldID doubleID = (*env)->GetStaticFieldID(env, doubleCls, "MIN_VALUE", "D");
            jdouble m6 = (*env)->GetStaticDoubleField(env, doubleCls, doubleID);

            (*env)->DeleteLocalRef(env, byteCls);
            (*env)->DeleteLocalRef(env, shortCls);
            (*env)->DeleteLocalRef(env, intCls);
            (*env)->DeleteLocalRef(env, longCls);
            (*env)->DeleteLocalRef(env, floatCls);
            (*env)->DeleteLocalRef(env, doubleCls);

            initializeMinimums(m1, m2, m3, m4, m5, m6);
            java_minimums_initialized = 1;
        }
        //initialize the java ID fields for faster Java data loading later on
        initializeIDS(env);

        //because of the dlopen stuff, this step has to be done before the monetdb_startup call
        jclass loaderCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBJavaLiteLoader");
        jfieldID pathID = (*env)->GetStaticFieldID(env, loaderCls, "LoadedLibraryFullPath", "Ljava/lang/String;");
        jstring loadPath = (jstring) (*env)->GetStaticObjectField(env, loaderCls, pathID);
        const char* loadPath_tmp = (*env)->GetStringUTFChars(env, loadPath, NULL);
        setMonetDB5LibraryPathEmbedded(loadPath_tmp);
        (*env)->ReleaseStringUTFChars(env, loadPath, loadPath_tmp);
        (*env)->DeleteLocalRef(env, loaderCls);
        (*env)->DeleteLocalRef(env, loadPath);

        char *err = monetdb_startup((char*) dbdir_string_tmp, (char) silentFlag, (char) sequentialFlag);
        (*env)->ReleaseStringUTFChars(env, dbDirectory, dbdir_string_tmp);
        if (err != NULL) {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), err);
            GDKfree(err);
            return NULL;
        }
        return (*env)->NewObject(env, monetDBEmbeddedDatabase, getMonetDBEmbeddedDatabaseConstructorID(), dbDirectory, silentFlag, sequentialFlag);
    } else {
        jclass exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "Only one MonetDB Embedded database is allowed per process!");
        (*env)->DeleteLocalRef(env, exceptionCls);
        return NULL;
    }
}

JNIEXPORT void JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase_stopDatabaseInternal
    (JNIEnv *env, jobject database) {
    (void) env;
    (void) database;

    if(monetdb_is_initialized()) {
        //release the java ID fields
        releaseIDS(env);
        //release the dlopen string
        freeMonetDB5LibraryPathEmbedded();
        monetdb_shutdown();
    } else {
        jclass exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "The MonetDB Embedded database is not running!");
        (*env)->DeleteLocalRef(env, exceptionCls);
    }
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase_createConnectionInternal
    (JNIEnv *env, jobject database) {
    jlong conn;
    (void) database;

    if(monetdb_is_initialized()) {
        conn = (jlong) monetdb_connect();
        if(conn == 0) {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The connection could not be created!");
            return NULL;
        }
        return (*env)->NewObject(env, getMonetDBEmbeddedConnectionClassID(), getMonetDBEmbeddedConnectionConstructorID(), conn);
    } else {
        jclass exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "The MonetDB Embedded database is not running!");
        (*env)->DeleteLocalRef(env, exceptionCls);
        return NULL;
    }
}

JNIEXPORT jobject JNICALL Java_nl_cwi_monetdb_embedded_env_MonetDBEmbeddedDatabase_createJDBCEmbeddedConnectionInternal
    (JNIEnv *env, jobject database) {
    jlong conn;
    (void) database;

    if(monetdb_is_initialized()) {
        conn = (jlong) monetdb_connect();
        if(conn == 0) {
            (*env)->ThrowNew(env, getMonetDBEmbeddedExceptionClassID(), "The connection could not be created!");
            return NULL;
        }
        return (*env)->NewObject(env, getJDBCEmbeddedConnectionClassID(), getJDBCDBEmbeddedConnectionConstructorID(), conn);
    } else {
        jclass exceptionCls = (*env)->FindClass(env, "nl/cwi/monetdb/embedded/env/MonetDBEmbeddedException");
        (*env)->ThrowNew(env, exceptionCls, "The MonetDB Embedded database is not running!");
        (*env)->DeleteLocalRef(env, exceptionCls);
        return NULL;
    }
}
