#include <stdio.h>

int a = 1234;

void sub_sameName()
{
	int a = 5678;
	printf("a in sub = %d\n", a);
}

void sameName()
{
	printf("a in main = %d\n", a);
	sub_sameName();
}