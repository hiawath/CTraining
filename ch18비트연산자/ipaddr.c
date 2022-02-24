#include <stdio.h>

union UIp {
	unsigned long addr;
	unsigned char sub[4];
};

int ipaddr()
{
	union UIp myip = { 0xd2780022 };
	printf("통신할 때 사용하는 주소 값 = %x\n", myip.addr);
	printf("사용자에게 보여주는 주소 값 = %d.%d.%d.%d\n", 
		myip.sub[3], myip.sub[2], myip.sub[1], myip.sub[0]);
}