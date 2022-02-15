#include <stdio.h>

void  pointerCopy()
{
	int value1 = 38, value2;
	int* pi;

	pi = &value1;
	value2 = *pi;
	printf("value1 = %d, value2 = %d\n", value1, value2);
}