#include <stdio.h>

int twoControl()
{
	for (int i = 1, j = 2; i < 5; i++, j += 2) {
		printf("i = %d, j = %d\n", i, j);
	}
}