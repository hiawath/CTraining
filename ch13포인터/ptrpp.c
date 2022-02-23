#include <stdio.h>

int ptrpp(){
	int ar[] = {10, 20, 30, 40, 50};
	int *ptr = ar;

	for (int i = 0;i < 5;i++) {
		printf("%d ", *ptr++);
	}
	printf("\n");
	return 0;
}