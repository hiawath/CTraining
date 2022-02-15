#include <stdio.h>

void move(enum origin to)
{
	printf("%d쪽으로 이동합니다.\n", to);
}

void moveChar(enum origin to) {
	static char* oriname[] = { "동", "서", "남","북" };
	printf("%s쪽으로 이동합니다.\n", oriname[to]);
}
