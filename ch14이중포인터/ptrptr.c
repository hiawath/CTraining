#include <stdio.h>

int ptrptr()
{
	int i = 1234;
	int *pi;
	int **ppi;

	pi = &i;
	ppi = &pi;

	printf("%d\n", **ppi);
    return 0;
}