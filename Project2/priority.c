#include <stdio.h>

int priority()
{
	int a = 5;
	a = a * 2 + 1;
	printf("a = %d\n", a);

	a = 5;
	a *= 2 + 1;
	printf("a = %d\n", a);
}