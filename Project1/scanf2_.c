#include <stdio.h>

void scanf2_()
{
	int width, height;

	printf("�簢���� ���� ���̸� �Է��ϼ��� : ");
	scanf_s("%d%d", &width, &height);

	printf("�簢���� ������ %d�Դϴ�. \n", width * height);
}