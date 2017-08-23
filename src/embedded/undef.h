extern FILE* embedded_stdout;
extern FILE* embedded_stderr;

#define exit(status) ((void) (status))
#ifdef NDEBUG
#undef assert
#define assert(ignore) ((void) 0)
#endif
#undef stdout
#define stdout embedded_stdout
#undef stderr
#define stderr embedded_stderr

#ifdef HAVE_EMBEDDED_R
#define srand(seed) ((void) (seed))
extern int embedded_r_rand(void);
#define rand embedded_r_rand
#endif

#undef PTRFMT
#undef PTRFMTCAST

#define PTRFMT "%p"
#define PTRFMTCAST (void *)
