#include <stdio.h>
/*
�ɰ���	�ڵ�	����	������Ʈ	����	��	��ǥ�� ����(Suppression) ����
����	C4996	'scanf': This function or variable may be unsafe.
Consider using scanf_s instead.
To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
See online help for details.Project1	
**/
//#define _CRT_SECURE_NO_WARNINGS



void scanf_() {
	int age;
	float height;
	char name[32];

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%f", &height);
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name) / sizeof(name[0]));

	printf("�ȳ��ϼ���. %d��, Ű %.2fcm�� %s��\n", age, height, name);
}