extern FILE* embedded_stdout;
extern FILE* embedded_stderr;

#define exit(status) ((void) (status))
#undef assert
#define NDEBUG 1
#define assert(ignore) ((void) 0)
/*#undef stdout
#define stdout embedded_stdout
#undef stderr
#define stderr embedded_stderr*/

#ifdef HAVE_EMBEDDED_R
#define srand(seed) ((void) (seed))
extern int embedded_r_rand(void);
#define rand embedded_r_rand
#endif

#undef PTRFMT
#undef PTRFMTCAST

#define PTRFMT "%p"
#define PTRFMTCAST (void *)

/* NOTE Added to compile MonetDBJavaLite on MinGW64 */
#define __CRT__NO_INLINE /* MinGW64 */

#define _Printf_format_string_ /* MonetDB */
#define _In_z_
#define HAVE_GETTIMEOFDAY
