#include <stdio.h>

void PrintSum(int from, int to)
{
	int sum = 0;
	for (int i = from; i <= to; i++) {
		sum += i;
	}
	printf("%d~%d = %d\n", from, to, sum);
}

void PrintHello(void)
{
	printf("안녕하세요.\n");
	printf("좋은 아침입니다.\n");
}