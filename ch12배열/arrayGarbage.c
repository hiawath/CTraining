#include <stdio.h>

int arGlobal[5];

void arrayGarbage()
{
	int arLocal[5];

	printf("%d\n", arGlobal[0]);
    printf("%d\n", arGlobal[1]);
    printf("%d\n", arGlobal[2]);
    printf("%d\n", arGlobal[3]);
    printf("%d\n", arGlobal[4]);



	printf("%d\n", arLocal[0]);
    printf("%d\n", arLocal[1]);
    printf("%d\n", arLocal[2]);
    printf("%d\n", arLocal[3]);
    printf("%d\n", arLocal[4]);
}