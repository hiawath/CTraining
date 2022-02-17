#include <stdio.h>

int repeat()
{
	int sum;

	// 1~10까지 합계
	sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1~10 = %d\n", sum);

	// 11~20까지 합계
	sum = 0;
	for (int i = 11; i <= 20; i++) {
		sum += i;
	}
	printf("11~20 = %d\n", sum);
}