#include <stdio.h>

int rect()
{
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			printf("*");
		}
		puts("");
	}
}