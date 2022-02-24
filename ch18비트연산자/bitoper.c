#include <stdio.h>

int bitoper()
{
	int a = 0x59;
	printf("not 0xf = %x\n", ~a);
	printf("and 0xf = %x\n", a & 0xf);
	printf("or 0xf = %x\n", a | 0xf);
	printf("xor 0xf = %x\n", a ^ 0xf);
}