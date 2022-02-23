#include <stdio.h>

int voidptr()
{
	int ar[] = { 1, 2, 3 };
	void *vp = ar;
	vp = (int *)vp + 1;
	printf("%d\n", *(int *)vp);
    return 0;
}