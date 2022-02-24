#include <stdio.h>

union UData {
	int a;
	short b[3];
};

int unionTest()
{
	union UData un;
	//un.a = 0x12345678;
    un.b[0]=0x1234;
    un.b[1]=0x5678;
    un.b[2]=0x9012;
	printf("un.a = %x\n", un.a);
	printf("un.b[0] = %x\n", un.b[0]);
	printf("un.b[1] = %x\n", un.b[1]);
    printf("un.b[2] = %x\n", un.b[2]);

	//un.b[0] = (short)0x9999;
    //un.b[2] = (short)0x1111;
	printf("대입 후의 un.a = %x\n", un.a);
}