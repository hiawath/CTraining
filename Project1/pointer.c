#include <stdio.h>

int pointer()
{
	int value = 38;
	int* pi;

	pi = &value;
	printf("value의 값은 %d입니다.\n", *pi);
}