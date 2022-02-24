#include <stdio.h>

void DumpArray(void *array, int length)
{
	for (int i = 0;i < length;i++) {
		printf("%02X ", *((unsigned char *)array + i));
	}
	printf("\n");
}

