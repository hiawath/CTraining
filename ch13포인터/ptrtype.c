#include <stdio.h>

int ptrtype()
{
	int i = 1234;
	int *pi = &i; 
	double d = 3.14;
	double *pd = &d;

	printf("정수 = %d\n", *pi);
	printf("실수 = %f\n", *pd);

	pi = (int *)&d;
	printf("pi로 읽은 d번지의 값 = %d\n", *pi);
    return 0;
}