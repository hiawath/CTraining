#include <stdio.h>


int ptrppReverse()
{
	int ar[] = { 10, 20, 30, 40, 50 };
	int* ptr = &ar[4];

	for (int i = 0;i < 5;i++) {
		printf("%d ", *ptr--);
    }
    printf("\n");
    return 0;
}