#include <stdio.h>

int triangle3()
{
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10 - a; b++) {
			printf(" ");
		}
		for (int b = 1; b <= a; b++) {
			printf("*");
		}
		puts("");
	}
}