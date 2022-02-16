#include <stdio.h>

int leapyear()
{
	int year;

	printf("현재 년도를 입력하시오. ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		puts("윤년입니다.");
	}
	else {
		puts("윤년이 아닙니다.");
	}
}