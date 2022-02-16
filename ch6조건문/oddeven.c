#include <stdio.h>

int oddeven()
{
	printf("숫자를 입력하세요 : ");
	int num;
	scanf_s("%d", &num);

	printf("%d는 %s수입니다.\n", num, num % 2 == 0 ? "짝" : "홀");
}