#include<stdio.h>
int and()
{
	int blood;

	printf("���� ������ ���Դϱ�? ");
	scanf_s("%d", &blood);

	if (70 <= blood && blood <= 109) {
		puts("���� �����Դϴ�.");
	}
	else {
		puts("���� ���� �� �ϼ���.");
	}
}