#include <stdio.h>

void move(enum origin to)
{
	printf("%d������ �̵��մϴ�.\n", to);
}

void moveChar(enum origin to) {
	static char* oriname[] = { "��", "��", "��","��" };
	printf("%s������ �̵��մϴ�.\n", oriname[to]);
}
