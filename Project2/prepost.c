#include <stdio.h>

int prepost()
{
	int a, b;

	a = 3;
	b = ++a;
	printf("전위형으로 썼을 때 : %d\n", b);

	a = 3;
	b = a++;
	printf("후위형으로 썼을 때 : %d\n", b);
}