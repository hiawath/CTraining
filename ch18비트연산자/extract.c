#include <stdio.h>

int extract()
{
	unsigned short han = 0x887c;
	if (((han & 0x7c00) >> 10) == 2) {
		puts("초성이 ㄱ입니다.");
	} else {
		puts("초성이 ㄱ이 아닙니다.");
	}
	return 0;
}