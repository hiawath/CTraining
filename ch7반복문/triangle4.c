#include <stdio.h>

int triangle4()
{
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10 - a; b++) {
			printf(" ");
		}
		for (int b = 1; b <= a * 2 - 1; b++) {
			printf("*");
		}
		puts("");
	}
}