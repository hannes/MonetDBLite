// Poor Man's configure
#include <stdio.h>

int main() {
	printf("-DSIZEOF_INT=%zu -DSIZEOF_LONG=%zu -DSIZEOF_LONG_LONG=%zu -DSIZEOF_SIZE_T=%zu -DSIZEOF_VOID_P=%zu\n",
			sizeof(int), sizeof(long), sizeof(long long), sizeof(size_t), sizeof(void*));
	return 0;
}
