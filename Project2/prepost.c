#include <stdio.h>

int prepost()
{
	int a, b;

	a = 3;
	b = ++a;
	printf("���������� ���� �� : %d\n", b);

	a = 3;
	b = a++;
	printf("���������� ���� �� : %d\n", b);
}