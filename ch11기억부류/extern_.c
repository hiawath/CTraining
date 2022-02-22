#include <stdio.h>

int before = 12;

int extern_()
{
	extern int after;
	printf("before = %d, after = %d\n", before, after);
}

int after = 34;

void sub()
{
	printf("before = %d, after = %d\n", before, after);
}