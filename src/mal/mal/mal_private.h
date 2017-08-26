/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

/* This file should not be included in any file outside of this directory */

#ifndef LIBMAL
#error this file should not be included outside its source directory
#endif

__hidden extern MT_Lock mal_namespaceLock;

extern volatile ATOMIC_TYPE mal_running;
#ifdef ATOMIC_LOCK
extern MT_Lock mal_runningLock;
#endif
