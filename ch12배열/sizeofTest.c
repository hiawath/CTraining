#include <stdio.h>

void sizeofTest()
{
	int a = 3;

	printf("int = %d\n", sizeof(int));
	printf("a = %d\n", sizeof(a));
	printf("double = %d\n", sizeof(double));
	printf("string = %d\n", sizeof("programming"));
}