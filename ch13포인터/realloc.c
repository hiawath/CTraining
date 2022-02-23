#include <stdio.h>
#include <malloc.h>

int reallocTest()
{
	int *ar;

	ar = (int *)malloc(5 * sizeof(int));
	ar[4] = 1234;

	ar = (int *)realloc(ar, 10 * sizeof(int));
	ar[9] = 5678;

	printf("ar[4]=%d, ar[9]=%d\n", ar[4], ar[9]);
	free(ar);
    return 0;
}