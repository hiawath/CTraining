#include <stdio.h>
#include "ch5.h"

int cast()
{
	int sum = 427;
	int num = 3;
	int a = (char)num;
	printf("��� = %d\n", sum / num);
	printf("��� = %f\n", (double)sum / (char)num);
}