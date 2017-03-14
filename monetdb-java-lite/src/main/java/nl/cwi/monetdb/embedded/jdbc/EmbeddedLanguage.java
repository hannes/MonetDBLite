/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.jdbc;

import nl.cwi.monetdb.mcl.connection.IMonetDBLanguage;

/**
 * The embedded implementation of the available languages on a JDBC connection: just SQL.
 * <br>
 * In an embedded connection there is no necessity to use delimiters, so no delimiters are added to the user's input.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public enum EmbeddedLanguage implements IMonetDBLanguage {

    /** the SQL language */
    LANG_SQL(new String[]{null, null, ";"}, "sql"),
    /** an unknown language */
    LANG_UNKNOWN(new String[]{null, null, null}, "unknown");

    EmbeddedLanguage(String[] queryTemplates, String representation) {
        this.queryTemplates = queryTemplates;
        this.representation = representation;
    }

    private final String[] queryTemplates;

    private final String representation;

    @Override
    public String getQueryTemplateIndex(int index) {
        return this.queryTemplates[index];
    }

    @Override
    public String getCommandTemplateIndex(int index) {
        return null;
    }

    @Override
    public String[] getQueryTemplates() {
        return this.queryTemplates;
    }

    @Override
    public String[] getCommandTemplates() {
        return null;
    }

    @Override
    public String getRepresentation() {
        return representation;
    }

    public static EmbeddedLanguage GetLanguageFromString(String language) {
        switch (language) {
            case "sql":
                return LANG_SQL;
            default:
                return LANG_UNKNOWN;
        }
    }
}
