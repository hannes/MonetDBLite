// Poor Man's configure
#include <stdio.h> 

int main() {
	printf("-DSIZEOF_INT=%d -DSIZEOF_LONG=%d -DSIZEOF_LONG_LONG=%d -DSIZEOF_SIZE_T=%d -DSIZEOF_VOID_P=%d\n",
			(int) sizeof(int), (int) sizeof(long), (int) sizeof(long long), (int) sizeof(size_t), (int) sizeof(void*));
	return 0;
}
