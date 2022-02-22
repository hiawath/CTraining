#include <stdio.h>

int GetMonthDays(int month)
{
	static int arDays[] =
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return arDays[month];
}

int staticArray()
{
	int month = 6;

	printf("%d월은 %d일까지 있습니다.\n", month, GetMonthDays(month));
}