/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.tests;

import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedConnection;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedDatabase;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.DisplayName;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

/**
 * Bootstrapper class for the tests.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
class MonetDBJavaLiteTesting {

    //TODO In JUnit you can't have a method run only once before all the test classes, so do this...

    static Path directoryPath;

    private static boolean setUpIsDone = false;

    static MonetDBEmbeddedConnection connection;

    //One counter per test file....
    private static int counter = 3;

    @BeforeAll
    @DisplayName("Startup the database only once for all the tests")
    static void startupDatabase() throws IOException, MonetDBEmbeddedException {
        if (setUpIsDone) {
            return;
        }
        directoryPath = Files.createTempDirectory("monetdbtest");
        MonetDBEmbeddedDatabase.StartDatabase(directoryPath.toString(), true, false);
        Assertions.assertTrue(MonetDBEmbeddedDatabase::IsDatabaseRunning);
        connection = MonetDBEmbeddedDatabase.CreateConnection();
        setUpIsDone = true;
    }

    @AfterAll
    @DisplayName("Shutdown at the end")
    static void shutdownDatabase() throws MonetDBEmbeddedException {
        counter--;
        if(counter == 0) {
            MonetDBEmbeddedDatabase.StopDatabase();
            Assertions.assertFalse(MonetDBEmbeddedDatabase::IsDatabaseRunning);
            //If the database is closed, then the connection will close as well
            Assertions.assertThrows(MonetDBEmbeddedException.class, () -> connection.sendQuery("SELECT 1;"));
            //Stop the database again also shouldn't work
            Assertions.assertThrows(MonetDBEmbeddedException.class, MonetDBEmbeddedDatabase::StopDatabase);
        }
    }
}
