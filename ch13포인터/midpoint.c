#include <stdio.h>

int midpoint()
{
	int ar[] = {11, 12, 13, 14, 15};
	int *p1,*p2,*p3;

	p1 = &ar[0];
	p2 = &ar[4];
	p3 = p1 + (p2 - p1) / 2;

	printf("중간의 요소 = %d\n", *p3);
}