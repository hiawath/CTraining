#include <stdio.h>

void blockRange2()
{
	int a = 3;
	printf("a = %d\n", a);
	{
		int a = 4;
		printf("a = %d\n", a);
	}
	printf("a = %d\n", a);
}