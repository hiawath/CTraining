#include <stdio.h>

void DumpArray(void *array, int length)
{
	for (int i = 0;i < length;i++) {
		printf("%02X ", *((unsigned char *)array + i));
	}
	printf("\n");
}

int genericPtr()
{
	int ari[] = {1, 2, 3, 4, 5};
	char arc[] = "Pointer";

	DumpArray(ari, sizeof(ari));
	DumpArray(arc, sizeof(arc));
}