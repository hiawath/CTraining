#include <stdio.h>

int sum100_minus()
{
	int sum = 0;
	for (int i = 100; i > 0; i--) {
		sum += i;
	}
	printf("100~1ÀÇ ÇÕ = %d\n", sum);
}