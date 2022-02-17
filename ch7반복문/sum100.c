#include <stdio.h>

int sum100()
{
	long long sum = 0;
	for (int i = 1; i <= 4000000000; i++) {
		sum += i;
	}
	printf("1~100ÀÇ ÇÕ = %lld\n", sum);
}