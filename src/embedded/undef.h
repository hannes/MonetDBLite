#include <assert.h>

extern FILE* embedded_stdout;
extern FILE* embedded_stderr;

#define exit(status) ((void) (status))
#undef stdout
#define stdout embedded_stdout
#undef stderr
#define stderr embedded_stderr

#ifdef HAVE_EMBEDDED_R
#define srand(seed) ((void) (seed))
extern int embedded_r_rand(void);
#define rand embedded_r_rand
#endif

