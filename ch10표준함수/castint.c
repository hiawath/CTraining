#include <stdio.h>
#include <math.h>

void castint()
{
	double d = 3.14;
	int i = d;
	printf("%d\n", i);
	d = -3.14;
	i = d;
	printf("%d\n", i);
}