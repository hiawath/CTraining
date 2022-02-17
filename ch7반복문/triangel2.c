#include <stdio.h>

int triangle2()
{
	for (int a = 10; a >= 1; a--) {
		for (int b = 1; b <= a; b++) {
			printf("*");
		}
		puts("");
	}
}