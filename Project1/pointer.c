#include <stdio.h>

int pointer()
{
	int value = 38;
	int* pi;

	pi = &value;
	printf("value�� ���� %d�Դϴ�.\n", *pi);
}