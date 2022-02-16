#include<stdio.h>
int and()
{
	int blood;

	printf("현재 혈당은 얼마입니까? ");
	scanf_s("%d", &blood);

	if (70 <= blood && blood <= 109) {
		puts("정상 혈당입니다.");
	}
	else {
		puts("혈당 관리 좀 하세요.");
	}
}