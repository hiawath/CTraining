#include <stdio.h>

int if_()
{
	int input;

	printf("2 + 3을 입력하세요 : ");
	scanf_s("%d", &input);
	if (input == 5) {
		puts("정답입니다.");
		puts("축하합니다");
	}
	else {
		puts("정답이 아닙니다. ");
	}
		

	
}