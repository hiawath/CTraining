#include <stdio.h>
#include <stdlib.h>

void absrange()
{
	int input;

	printf("10~50 사이의 숫자를 입력하세요 : ");
	scanf("%d", &input);

	if (abs(input - 30) <= 20) {
		puts("범위안의 숫자입니다.");
	} else {
		puts("범위를 벗어났습니다.");
	}
}