# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0.  If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.
#
# Copyright 1997 - July 2008 CWI, August 2008 - 2016 MonetDB B.V.

from monetdblite import cursors
from monetdblite import exceptions
from monetdblite import embeddedmonetdb

monetdblite_is_initialized = False

class Connection(object):
    """A MonetDBLite SQL database connection"""
    def __init__(self, database, autocommit=False, 
        hostname=None, username="monetdb", password="monetdb", 
        host=None, user=None, dsn=None):
        """ Initializes the MonetDBLite database.
        args:
            database (str): path to the database directory
            autocommit (bool):  enable/disable auto commit (default: False)

            Ignored Parameters: hostname, username, password, host, user, dsn
        returns:
            Connection object
        """
        if monetdblite_is_initialized:
            raise Exception("MonetDBLite is already initialized. Close the previous connection first.")
        embeddedmonetdb.init(database)
        self.set_autocommit(autocommit)
        self.replysize = 1
        self.__cursors = []

    def remove_cursor(self, cursor):
        self.__cursors.remove(cursor)

    def close(self):
        for cursor in self.__cursors:
            cursor.close()
        self.__cursors = []
        embeddedmonetdb.shutdown()

    def set_autocommit(self, autocommit):
    	# FIXME
        #embeddedmonetdb.set_autocommit(autocommit)
        pass

    def transaction(self, client=None):
        embeddedmonetdb.sql('START TRANSACTION', client)

    def commit(self, client=None):
        embeddedmonetdb.sql('COMMIT', client)

    def rollback(self, client=None):
        embeddedmonetdb.sql('ROLLBACK', client)

    def cursor(self):
        cursor = cursors.Cursor(self)
        self.__cursors.append(cursor)
        return cursor

    def execute(self, query, client=None):
        return embeddedmonetdb.sql(query, client)

    Warning = exceptions.Warning
    Error = exceptions.Error
    InterfaceError = exceptions.InterfaceError
    DatabaseError = exceptions.DatabaseError
    DataError = exceptions.DataError
    OperationalError = exceptions.OperationalError
    IntegrityError = exceptions.IntegrityError
    InternalError = exceptions.InternalError
    ProgrammingError = exceptions.ProgrammingError
    NotSupportedError = exceptions.NotSupportedError




