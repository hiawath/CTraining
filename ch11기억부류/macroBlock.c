#include <stdio.h>
#define swap(a, b) {int t = a; a = b; b = t; }

void macroBlock()
{
	int a = 11, b = 99;
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
}