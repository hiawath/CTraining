#include <stdio.h>

int leapyear()
{
	int year;

	printf("���� �⵵�� �Է��Ͻÿ�. ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		puts("�����Դϴ�.");
	}
	else {
		puts("������ �ƴմϴ�.");
	}
}