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
	printf("�ȳ��ϼ���.\n");
	printf("���� ��ħ�Դϴ�.\n");
}