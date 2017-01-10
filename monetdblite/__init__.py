"""
MonetDBLite is an embedded database.

To set up a connection use monetdblite.connect()
"""
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0.  If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.
#
# Copyright 1997 - July 2008 CWI, August 2008 - 2016 MonetDB B.V.

import pkg_resources
from monetdblite import connections
from monetdblite import cursors
from monetdblite import exceptions
from monetdblite import embeddedmonetdb

from monetdblite.connections import Connection
from monetdblite.exceptions import *


try:
    __version__ = pkg_resources.require("monetdblite")[0].version
except pkg_resources.DistributionNotFound:
    __version__ = "1.0rc"


apilevel = "2.0"
threadsafety = 0
paramstyle = "pyformat"


def connect(*args, **kwargs):
    return Connection(*args, **kwargs)

connect.__doc__ = Connection.__init__.__doc__


def init(*args, **kwargs):
    return embeddedmonetdb.init(*args, **kwargs)

init.__doc__ = embeddedmonetdb.init.__doc__

def sql(*args, **kwargs):
    return embeddedmonetdb.sql(*args, **kwargs)

sql.__doc__ = embeddedmonetdb.sql.__doc__


def insert(*args, **kwargs):
    return embeddedmonetdb.insert(*args, **kwargs)

insert.__doc__ = embeddedmonetdb.insert.__doc__

def create(*args, **kwargs):
    return embeddedmonetdb.create(*args, **kwargs)

create.__doc__ = embeddedmonetdb.create.__doc__

def connectclient(*args, **kwargs):
    return embeddedmonetdb.connect(*args, **kwargs)

connectclient.__doc__ = embeddedmonetdb.connect.__doc__

def disconnectclient(*args, **kwargs):
    return embeddedmonetdb.disconnect(*args, **kwargs)

disconnectclient.__doc__ = embeddedmonetdb.disconnect.__doc__

def shutdown(*args, **kwargs):
    return embeddedmonetdb.shutdown(*args, **kwargs)

shutdown.__doc__ = embeddedmonetdb.shutdown.__doc__
