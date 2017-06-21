/* monetdb_config.h.  Generated from monetdb_config.h.in by configure.  */
/* monetdb_config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef _SEEN_MONETDB_CONFIG_H
#define _SEEN_MONETDB_CONFIG_H 1


///* Define if building universal (internal helper macro) */
///* #undef AC_APPLE_UNIVERSAL_BUILD */
//
///* location where binaries are installed */
//#define BINDIR "/usr/local/bin"
//
///* read-only architecture-independent data */
//#define DATA_DIR "/usr/local/share"

/* Directory separator */
#define DIR_SEP '/'

/* Directory separator */
#define DIR_SEP_STR "/"

/* Define to nothing if C supports flexible array members, and to 1 if it does
   not. That way, with a declaration like `struct s { int n; double
   d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
   compilers. When computing the size of such an object, don't use 'sizeof
   (struct s)' as it overestimates the size. Use 'offsetof (struct s, d)'
   instead. Don't use 'offsetof (struct s, d[0])', as this doesn't work with
   MSVC and with C++ compilers. */
#define FLEXIBLE_ARRAY_MEMBER /**/

/* Define to 1 if you have the `asctime_r' function. */
#define HAVE_ASCTIME_R 1

/* Define if you have asctime_r(struct tm*,char *buf,size_t s) */
/* #undef HAVE_ASCTIME_R3 */


/* Define to 1 if you have the `backtrace' function. */
#define HAVE_BACKTRACE 1

/* Define to 1 if you have the `cbrt' function. */
#define HAVE_CBRT 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `ctime_r' function. */
#define HAVE_CTIME_R 1

/* Define if you have ctime_r(time_t*,char *buf,size_t s) */
/* #undef HAVE_CTIME_R3 */

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
/* #undef HAVE_DECL_TZNAME */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Support for MonetDB as a library */
#define HAVE_EMBEDDED 1

/* Support for MonetDB as a library for R */
/* #undef HAVE_EMBEDDED_R */

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the `fabsf' function. */
#define HAVE_FABSF 1

/* Define to 1 if you have the `fallocate' function. */
/* #undef HAVE_FALLOCATE */

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* If the system has a working fdatasync */
/* #undef HAVE_FDATASYNC */

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define to 1 if you have the `fpclass' function. */
/* #undef HAVE_FPCLASS */

/* Define to 1 if you have the `fpclassify' function. */
/* #undef HAVE_FPCLASSIFY */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getexecname' function. */
/* #undef HAVE_GETEXECNAME */

/* Define to 1 if you have the `getlogin' function. */
#define HAVE_GETLOGIN 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

///* Define if you have the iconv() function and it works. */
//#define HAVE_ICONV 1
//
///* Define to 1 if you have the <iconv.h> header file. */
//#define HAVE_ICONV_H 1

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Define to 1 if the system has the type `intptr_t'. */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* Define to 1 if you have the `isinf' function. */
#define HAVE_ISINF 1

/* Define to 1 if you have the <kvm.h> header file. */
/* #undef HAVE_KVM_H */

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1


/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef HAVE_LIBINTL_H */

/* Define if you have the pthread library */
#define HAVE_LIBPTHREAD 1

/* Define if you have the z library */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `llabs' function. */
#define HAVE_LLABS 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the `lockf' function. */
#define HAVE_LOCKF 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the <mach/mach_init.h> header file. */
#define HAVE_MACH_MACH_INIT_H 1

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
#define HAVE_MACH_O_DYLD_H 1

/* Define to 1 if you have the <mach/task.h> header file. */
#define HAVE_MACH_TASK_H 1

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Enable MAPI */
/* #undef HAVE_MAPI */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mremap' function. */
/* #undef HAVE_MREMAP */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the `nextafterf' function. */
#define HAVE_NEXTAFTERF 1

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if you have the `popen' function. */
#define HAVE_POPEN 1

/* Define to 1 if you have the `posix_fadvise' function. */
/* #undef HAVE_POSIX_FADVISE */

/* Define to 1 if you have the `posix_fallocate' function. */
/* #undef HAVE_POSIX_FALLOCATE */

/* Define to 1 if you have the `posix_madvise' function. */
#define HAVE_POSIX_MADVISE 1

/* Define to 1 if you have the <procfs.h> header file. */
/* #undef HAVE_PROCFS_H */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define if you have the pthread_kill function */
#define HAVE_PTHREAD_KILL 1

/* Define if you have the pthread_sigmask function */
#define HAVE_PTHREAD_SIGMASK 1

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `round' function. */
#define HAVE_ROUND 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the <semaphore.h> header file. */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `shutdown' function. */
#define HAVE_SHUTDOWN 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if the system has the type `socklen_t'. */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if you have the `strptime' function. */
#define HAVE_STRPTIME 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strtod' function. */
#define HAVE_STRTOD 1

/* Define to 1 if you have the `strtof' function. */
#define HAVE_STRTOF 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_ZONE 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/utime.h> header file. */
/* #undef HAVE_SYS_UTIME_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `task_info' function. */
#define HAVE_TASK_INFO 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the `times' function. */
#define HAVE_TIMES 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#define HAVE_TM_ZONE 1

/* Define to 1 if you have the `trunc' function. */
#define HAVE_TRUNC 1

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
/* #undef HAVE_TZNAME */

/* Define to 1 if the system has the type `uintptr_t'. */
#define HAVE_UINTPTR_T 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <winsock.h> header file. */
/* #undef HAVE_WINSOCK_H */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define if you have _sys_siglist */
/* #undef HAVE__SYS_SIGLIST */

/* Define to 1 if the system has the type `__int128'. */
/* #undef HAVE___INT128 */

/* Define to 1 if the system has the type `__int128_t'. */
/* #undef HAVE___INT128_T */

/* Define to 1 if the system has the type `__int64'. */
/* #undef HAVE___INT64 */

/* Define to 1 if the system has the type `__uint128_t'. */
/* #undef HAVE___UINT128_T */

/* Host identifier */
#define HOST "unknown"

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 
//
///* location where libraries are installed */
//#define LIBDIR "/usr/local/lib"

/* Format to print 64 bit signed integers. */
#define LLFMT "%lld"
//
///* modifiable single-machine data */
//#define LOCALSTATEDIR "/usr/local/var"
//
///* Define to the sub-directory where libtool stores uninstalled libraries. */
//#define LT_OBJDIR ".libs/"
//
///* The used password hash algorithm */
//#define MONETDB5_PASSWDHASH "SHA512"
//
///* The used password hash algorithm */
//#define MONETDB5_PASSWDHASH_TOKEN SHA512

/* Release name or "unreleased" */
#define MONETDB_RELEASE "unreleased"

/* Define if you do not want assertions */
/* #undef NDEBUG */

///* Name of package */
//#define PACKAGE "MonetDB"
//
///* Define to the address where bug reports for this package should be sent. */
//#define PACKAGE_BUGREPORT "https://bugs.monetdb.org/"

///* Define to the full name of this package. */
//#define PACKAGE_NAME "MonetDB"
//
///* Define to the full name and version of this package. */
//#define PACKAGE_STRING "MonetDB 11.27.0"
//
///* Define to the one symbol short name of this package. */
//#define PACKAGE_TARNAME "MonetDB"
//
///* Define to the home page for this package. */
//#define PACKAGE_URL "https://www.monetdb.org/"
//
///* Define to the version of this package. */
//#define PACKAGE_VERSION "11.27.0"

/* Path separator */
#define PATH_SEP ':'

/* Path separator */
#define PATH_SEP_STR ":"

/* Compiler flag */
/* #undef PROFILE */

///* The size of `char', as computed by sizeof. */
//#define SIZEOF_CHAR 1
//
///* The size of `int', as computed by sizeof. */
//#define SIZEOF_INT 4
//
///* The size of `long', as computed by sizeof. */
//#define SIZEOF_LONG 8

///* The size of `long long', as computed by sizeof. */
//#define SIZEOF_LONG_LONG 8

///* The size of `ptrdiff_t', as computed by sizeof. */
//#define SIZEOF_PTRDIFF_T 8

///* The size of `short', as computed by sizeof. */
//#define SIZEOF_SHORT 2

///* The size of `size_t', as computed by sizeof. */
//#define SIZEOF_SIZE_T 8

///* The size of `ssize_t', as computed by sizeof. */
//#define SIZEOF_SSIZE_T 8

///* The size of `void *', as computed by sizeof. */
//#define SIZEOF_VOID_P 8

///* The size of `wchar_t', as computed by sizeof. */
//#define SIZEOF_WCHAR_T 4
//
///* The size of `__int128', as computed by sizeof. */
//#define SIZEOF___INT128 16
//
///* The size of `__int128_t', as computed by sizeof. */
//#define SIZEOF___INT128_T 16
//
///* The size of `__int64', as computed by sizeof. */
//#define SIZEOF___INT64 0

/* type used for sockets */
#define SOCKET int

///* Shared Object extension */
//#define SO_EXT ".dylib"

/* Shared Object prefix */
#define SO_PREFIX "lib"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Format to print 64 bit unsigned integers. */
#define ULLFMT "%llu"

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
//
//
///* Version number of package */
//#define VERSION "11.27.0"

/* Define on Microsoft Windows (also under Cygwin) */
/* #undef WIN32 */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif

/* libxml2 enable threading compiler flag */
/* #undef __MT__ */

/* Does your compiler support the `__hidden' specifier? */
#define __hidden /* empty */

/* function to close a socket */
#define closesocket close

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type used by connect */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */


#ifdef HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif

#include <stdio.h>		/* NULL, printf etc. */

#include <stdlib.h>
#include <errno.h>
#include <stdarg.h>		/* va_alist.. */
#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif
#ifndef HAVE_INTPTR_T
typedef ssize_t intptr_t;
#endif
#ifndef HAVE_UINTPTR_T
typedef size_t uintptr_t;
#endif
#ifdef HAVE_STDBOOL_H
#include <stdbool.h>
#endif
#ifndef __bool_true_false_are_defined
#define true 1
#define false 0
#define __bool_true_false_are_defined 1
#endif

#include <assert.h>

#define SLASH_2_DIR_SEP(s) {char *t; for(t=strchr(s, '/'    ); t; t=strchr(t+1, '/'    )) *t=DIR_SEP;}
#define DIR_SEP_2_SLASH(s) {char *t; for(t=strchr(s, DIR_SEP); t; t=strchr(t+1, DIR_SEP)) *t='/'    ;}

#ifdef HAVE_LONG_LONG
typedef long long lng;
typedef unsigned long long ulng;
# define SIZEOF_LNG SIZEOF_LONG_LONG
#else
# ifdef HAVE___INT64
typedef __int64 lng;
typedef unsigned __int64 ulng;
#  define SIZEOF_LNG SIZEOF___INT64
# endif
#endif

#ifdef HAVE___INT128
typedef __int128 hge;
typedef unsigned __int128 uhge;
# define HAVE_HGE 1
# define SIZEOF_HGE SIZEOF___INT128
#else
# if defined(HAVE___INT128_T) && defined(HAVE___UINT128_T)
typedef __int128_t hge;
typedef __uint128_t uhge;
#  define HAVE_HGE 1
#  define SIZEOF_HGE SIZEOF___INT128_T
# endif
#endif


#ifndef HAVE_PTRDIFF_T
# if SIZEOF_SIZE_T == SIZEOF_INT
typedef int ptrdiff_t;
# else
typedef lng ptrdiff_t;
# endif
#endif

/* define printf formats for printing size_t and ssize_t variables */
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901 && !defined(__svr4__) && !defined(WIN32) && !defined(__sgi)) || __GNUC__ > 3
# define SZFMT "%zu"
# define SSZFMT "%zd"
#elif SIZEOF_SIZE_T == SIZEOF_INT
# define SZFMT "%u"
# define SSZFMT "%d"
#elif SIZEOF_SIZE_T == SIZEOF_LONG
# define SZFMT "%lu"
# define SSZFMT "%ld"
#elif SIZEOF_SIZE_T == SIZEOF_LONG_LONG || SIZEOF_SIZE_T == SIZEOF___INT64
# define SZFMT ULLFMT
# define SSZFMT LLFMT
#else
# error no definition for SZFMT/SSZFMT
#endif

/* define printf formats for printing ptrdiff_t variables */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901 && !defined(__svr4__) && !defined(WIN32) && !defined(__sgi) || defined(__hpux)
#define PDFMT "%td"
#elif SIZEOF_PTRDIFF_T == SIZEOF_INT
#define PDFMT "%d"
#elif SIZEOF_PTRDIFF_T == SIZEOF_LONG
#define PDFMT "%ld"
#elif SIZEOF_PTRDIFF_T == SIZEOF_LONG_LONG || SIZEOF_PTRDIFF_T == SIZEOF___INT64
#define PDFMT LLFMT
#else
#error no definition for PDFMT
#endif

/* define printf format for printing pointer values */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901
#define PTRFMT		"%p"
#define PTRFMTCAST		/* no cast needed */
#elif defined(_MSC_VER)
#define PTRFMT		"%p"
#define PTRFMTCAST
#elif SIZEOF_VOID_P == SIZEOF_INT
#define PTRFMT		"%x"
#define PTRFMTCAST	(unsigned int)
#elif SIZEOF_VOID_P == SIZEOF_LONG
#define PTRFMT		"%lx"
#define PTRFMTCAST	(unsigned long)
#elif SIZEOF_VOID_P == SIZEOF_LONG_LONG
#define PTRFMT		"%llx"
#define PTRFMTCAST	(unsigned long long)
#else
#error no definition for PTRFMT
#endif

/* defines to help the compiler check printf-style format arguments */
#if !defined(__GNUC__) || __GNUC__ < 2 || (__GNUC__ == 2 && __GNUC_MINOR__ < 5)
/* This feature is available in gcc versions 2.5 and later.  */
# ifndef __attribute__
#  define __attribute__(Spec) /* empty */
# endif
#else
/* The __-protected variants of `format' and `printf' attributes are
 * accepted by gcc versions 2.6.4 (effectively 2.7) and later.  */
# if !defined(__format__) && (__GNUC__ < 2 || (__GNUC__ == 2 && __GNUC_MINOR__ < 7))
#  define __format__ format
#  define __printf__ printf
# endif
#endif
#if !defined(_MSC_VER) && !defined(_In_z_)
# define _In_z_
# define _Printf_format_string_
# define __declspec(x)
#endif

/* work around problem compiling batxml.c with clang
 * clang 3.5.0 claims to be GnuC 4.3, but doesn't accept
 * __attribute__((alloc_size(N))), as libml2 2.9.2 expects
 */
#if defined(__GNUC__) && defined(__clang__)
#define LIBXML_ATTR_ALLOC_SIZE(x)
#endif

/* These are required to make MonetDB's source tree CRAN-compliant */

#ifdef HAVE_EMBEDDED_R
#include "embedded/undef.h"
#endif

#define PROMPT1		"\001\001\n"	/* prompt: ready for new query */
#define PROMPT2		"\001\002\n"	/* prompt: more data needed */

#endif /* _SEEN_MONETDB_CONFIG_H */

