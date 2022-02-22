#include <stdio.h>

int global;

int gabage()
{
	int mainlocal;			// main 함수의 지역변수

	printf("global = %d, mainlocal = %d\n", global, mainlocal);
}