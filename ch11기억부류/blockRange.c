#include <stdio.h>

void blockRange()
{
	int a = 3;
	if (a == 3) {
		int b = 5;
		printf("b = %d\n", b);
	}
	//printf("b = %d\n", b);		// 에러
}