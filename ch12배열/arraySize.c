#include <stdio.h>

void arraySize()
{
	int price[] = { 100, 500, 300, 400, 900 };

	for (int i = 0;i < 5;i++) {
		printf("가격 = %d\n", price[i]);
	}
}