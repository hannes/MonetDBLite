/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.utils;

/**
 * An util class to escape Java Strings to avoid SQL Injection and other problems with SQL queries.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class StringEscaper {

    private StringEscaper() {}

    /**
     * Escapes a Java String for usage in SQL queries.
     *
     * @param input The String to escape
     * @return The input String escaped
     */
    public static String sqlStringEscape(String input) {
        return "'" + input.replaceAll("\\\\", "\\\\\\\\").replaceAll("'", "\\\\'")
                + "'";
    }
}
