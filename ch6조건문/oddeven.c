#include <stdio.h>

int oddeven()
{
	printf("���ڸ� �Է��ϼ��� : ");
	int num;
	scanf_s("%d", &num);

	printf("%d�� %s���Դϴ�.\n", num, num % 2 == 0 ? "¦" : "Ȧ");
}