#include <stdio.h>
#include "cursor.h"
void cursor() {
	printf("3초 후에 화면을 지웁니다.\n");
	Sleep(3000);
	//delay(3000);
	//clrscr();
	system("cls");
	//gotoxy(20, 10);
	
	COORD Curor = { 20, 10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Curor);
	
	printf("화면 중앙에 문자열을 출력합니다.\n");
}