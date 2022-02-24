#include <stdio.h>

struct Sbit {
	unsigned short a : 4;
	unsigned short b : 3;
	unsigned short c : 1;
	unsigned short d : 8;
};

int bitField()
{
	struct Sbit bit;
	bit.a = 0xf;
	bit.b = 3;
	bit.c = 1;
	bit.d = 0xab;
	printf("크기 = %d, 값 = %x\n", sizeof(bit), bit);
}