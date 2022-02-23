#include <stdio.h>

int ptrsum()
{
	int ar[] = {10, 20, 30, 40, 50, 0 };
	int *ptr = ar;
	int sum = 0;

	while (*ptr) sum += *ptr++;
	printf("sum = %d\n", sum);
    return 0;
}