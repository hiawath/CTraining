#include <stdio.h>

int infinite()
{
	int num;

	for (;;) {
		printf("������ ��ȸ�� �л� ��ȣ�� �Է��ϼ���(���� ���� 0) : ");
		scanf_s("%d", &num);
		if (num == 0) break;
		printf("%d�� �л��� ������ xx�Դϴ�.\n", num);
	}
	puts("�����ϼ̽��ϴ�.");
}