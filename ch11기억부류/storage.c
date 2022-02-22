#include <stdio.h>

int global;					// 함수 외부에서 선언되었으므로 전역변수

int storage()
{
	int mainlocal;			// main 함수의 지역변수

	global = 1;				// 가능
	mainlocal = 2;			// 가능
	//sublocal = 3;			// 불가능
}

void sub1()
{
	int sublocal;			// func 함수의 지역변수

	global = 1;				// 가능
	//mainlocal = 2;			// 불가능
	sublocal = 3;			// 가능
}