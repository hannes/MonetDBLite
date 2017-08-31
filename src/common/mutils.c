/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

#include "monetdb_config.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif
#include "mutils.h"


#ifndef O_CLOEXEC
#define O_CLOEXEC 0
#endif

#ifdef NATIVE_WIN32

#include <dirent.h>


#include "fsync.c"

/* Some definitions that we need to compile on Windows.
 * Note that Windows only runs on little endian architectures. */
//typedef unsigned int u_int32_t;
//typedef int int32_t;
//#define BIG_ENDIAN	4321
//#define LITTLE_ENDIAN	1234
//#define BYTE_ORDER	LITTLE_ENDIAN


#include <stdio.h>

/* translate Windows error code (GetLastError()) to Unix-style error */
int
winerror(int e)
{
	switch (e) {
	case ERROR_BAD_ENVIRONMENT:
		return E2BIG;
	case ERROR_ACCESS_DENIED:
	case ERROR_CANNOT_MAKE:
	case ERROR_CURRENT_DIRECTORY:
	case ERROR_DRIVE_LOCKED:
	case ERROR_FAIL_I24:
	case ERROR_LOCK_FAILED:
	case ERROR_LOCK_VIOLATION:
	case ERROR_NETWORK_ACCESS_DENIED:
	case ERROR_NOT_LOCKED:
	case ERROR_SEEK_ON_DEVICE:
		return EACCES;
	case ERROR_MAX_THRDS_REACHED:
	case ERROR_NESTING_NOT_ALLOWED:
	case ERROR_NO_PROC_SLOTS:
		return EAGAIN;
	case ERROR_DIRECT_ACCESS_HANDLE:
	case ERROR_INVALID_TARGET_HANDLE:
		return EBADF;
	case ERROR_CHILD_NOT_COMPLETE:
	case ERROR_WAIT_NO_CHILDREN:
		return ECHILD;
	case ERROR_ALREADY_EXISTS:
	case ERROR_FILE_EXISTS:
		return EEXIST;
	case ERROR_INVALID_ACCESS:
	case ERROR_INVALID_DATA:
	case ERROR_INVALID_FUNCTION:
	case ERROR_INVALID_HANDLE:
	case ERROR_INVALID_PARAMETER:
	case ERROR_NEGATIVE_SEEK:
		return EINVAL;
	case ERROR_TOO_MANY_OPEN_FILES:
		return EMFILE;
	case ERROR_BAD_NET_NAME:
	case ERROR_BAD_NETPATH:
	case ERROR_BAD_PATHNAME:
	case ERROR_FILE_NOT_FOUND:
	case ERROR_FILENAME_EXCED_RANGE:
	case ERROR_INVALID_DRIVE:
	case ERROR_NO_MORE_FILES:
	case ERROR_PATH_NOT_FOUND:
		return ENOENT;
	case ERROR_BAD_FORMAT:
		return ENOEXEC;
	case ERROR_ARENA_TRASHED:
	case ERROR_INVALID_BLOCK:
	case ERROR_NOT_ENOUGH_MEMORY:
	case ERROR_NOT_ENOUGH_QUOTA:
		return ENOMEM;
	case ERROR_DISK_FULL:
		return ENOSPC;
	case ERROR_DIR_NOT_EMPTY:
		return ENOTEMPTY;
	case ERROR_BROKEN_PIPE:
		return EPIPE;
	case ERROR_NOT_SAME_DEVICE:
		return EXDEV;
	default:
		return EINVAL;
	}
}

/* see contract of unix MT_lockf */
int
MT_lockf(char *filename, int mode, off_t off, off_t len)
{
	int ret = 1, fd = -1;
	OVERLAPPED ov;
	HANDLE fh;
	static struct lockedfiles {
		struct lockedfiles *next;
		char *filename;
		int fildes;
	} *lockedfiles;
	struct lockedfiles **fpp, *fp;

	memset(&ov, 0, sizeof(ov));
	ov.Offset = (unsigned int) off;
	ov.OffsetHigh = 0;	/* sizeof(off) == 4, i.e. off >> 32 is not possible */

	if (mode == F_ULOCK) {
		for (fpp = &lockedfiles; (fp = *fpp) != NULL; fpp = &fp->next) {
			if (strcmp(fp->filename, filename) == 0) {
				free(fp->filename);
				fd = fp->fildes;
				fh = (HANDLE) _get_osfhandle(fd);
				fp = *fpp;
				*fpp = fp->next;
				free(fp);
				ret = UnlockFileEx(fh, 0, len, 0, &ov);
				return ret ? 0 : -1;
			}
		}
		/* didn't find the locked file, try opening the file
		 * directly */
		fh = CreateFile(filename,
				GENERIC_READ | GENERIC_WRITE, 0,
				NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		if (fh == INVALID_HANDLE_VALUE)
			return -2;
		ret = UnlockFileEx(fh, 0, len, 0, &ov);
		CloseHandle(fh);
		return 0;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TEXT | O_CLOEXEC, MONETDB_MODE);
	if (fd < 0)
		return -2;
	fh = (HANDLE) _get_osfhandle(fd);
	if (fh == INVALID_HANDLE_VALUE) {
		close(fd);
		return -2;
	}

	if (mode == F_TLOCK) {
		ret = LockFileEx(fh, LOCKFILE_FAIL_IMMEDIATELY | LOCKFILE_EXCLUSIVE_LOCK, 0, len, 0, &ov);
	} else if (mode == F_LOCK) {
		ret = LockFileEx(fh, LOCKFILE_EXCLUSIVE_LOCK, 0, len, 0, &ov);
	} else if (mode == F_TEST) {
		ret = LockFileEx(fh, LOCKFILE_FAIL_IMMEDIATELY | LOCKFILE_EXCLUSIVE_LOCK, 0, len, 0, &ov);
		if (ret != 0) {
			UnlockFileEx(fh, 0, len, 0, &ov);
			close(fd);
			return 0;
		}
	} else {
		close(fd);
		errno = EINVAL;
		return -2;
	}
	if (ret != 0) {
		if ((fp = malloc(sizeof(*fp))) != NULL &&
		    (fp->filename = strdup(filename)) != NULL) {
			fp->fildes = fd;
			fp->next = lockedfiles;
			lockedfiles = fp;
		}
		return fd;
	} else {
		close(fd);
		return -1;
	}
}

#else

#if defined(HAVE_LOCKF) && defined(__MACH__)
/* lockf() seems to be there, but I didn't find any header file that
   declares the prototype ... */
extern int lockf(int fd, int cmd, off_t len);
#endif

#ifndef HAVE_LOCKF
/* Cygwin implementation: struct flock is there, but lockf() is
   missing.
 */
static int
lockf(int fd, int cmd, off_t len)
{
	struct flock l;

	if (cmd == F_LOCK || cmd == F_TLOCK)
		l.l_type = F_WRLCK;
	else if (cmd == F_ULOCK)
		l.l_type = F_UNLCK;
	l.l_whence = SEEK_CUR;
	l.l_start = 0;
	l.l_len = len;
	return fcntl(fd, cmd == F_TLOCK ? F_SETLKW : F_SETLK, &l);
}
#endif

#ifndef O_TEXT
#define O_TEXT 0
#endif
/* returns -1 when locking failed,
 * returns -2 when the lock file could not be opened/created
 * returns 0 when mode is F_TEST and the lock file was not locked
 * returns the (open) file descriptor to the file when locking
 * returns 0 when unlocking */
int
MT_lockf(char *filename, int mode, off_t off, off_t len)
{
	int fd = open(filename, O_CREAT | O_RDWR | O_TEXT | O_CLOEXEC, MONETDB_MODE);

	if (fd < 0)
		return -2;

	if (lseek(fd, off, SEEK_SET) >= 0 &&
	    lockf(fd, mode, len) == 0) {
		if (mode == F_ULOCK || mode == F_TEST) {
			close(fd);
			return 0;
		}
		/* do not close else we lose the lock we want */
		(void) lseek(fd, 0, SEEK_SET); /* move seek pointer back */
		return fd;
	}
	close(fd);
	return -1;
}

#endif

