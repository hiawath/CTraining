#include <stdio.h>

int triangle()
{
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= a; b++) {
			printf("*");
		}
		puts("");
	}
}