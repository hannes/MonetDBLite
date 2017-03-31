/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.utils;

import java.io.File;
import java.io.IOException;
import java.util.Map;

/**
 * Fork a child Java process, with the entrypoint on a provided Java Class, while returning it exit status.
 * Adapted from:
 * https://stackoverflow.com/questions/636367/executing-a-java-application-in-a-separate-process#answer-723914
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class ForkJavaProcess {

    private ForkJavaProcess() {}

    /**
     * Create a child process and wait for it to end.
     *
     * @param classToExecute The Java class to execute
     * @param environments A map of environment variables to pass in the process
     * @return The exit status of the child process
     * @throws IOException - If an {@link IOException} occurred in the process
     * @throws InterruptedException - If an {@link InterruptedException} occurred in the process
     */
    public static int exec(Class<?> classToExecute, Map<String,String> environments)
            throws IOException, InterruptedException {
        String javaHome = System.getProperty("java.home");
        String javaBin = javaHome + File.separator + "bin" + File.separator + "java";
        String classpath = System.getProperty("java.class.path");
        String className = classToExecute.getCanonicalName();

        ProcessBuilder builder = new ProcessBuilder(javaBin, "-cp", classpath, className);
        builder.environment().putAll(environments);
        Process process = builder.start();
        process.waitFor();

        return process.exitValue();
    }
}
