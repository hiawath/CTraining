#include <stdio.h>

int aunion4()
{
	union {
		unsigned long addr;
		unsigned char sub[4];
	};

	addr = 0xd2780022;
	printf("통신할 때 사용하는 주소 값 = %x\n", addr);
	printf("사용자에게 보여주는 주소 값 = %d.%d.%d.%d\n", 
		sub[3], sub[2], sub[1], sub[0]);
}