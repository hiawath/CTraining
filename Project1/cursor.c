#include <stdio.h>
#include "cursor.h"
void cursor() {
	printf("3�� �Ŀ� ȭ���� ����ϴ�.\n");
	Sleep(3000);
	//delay(3000);
	//clrscr();
	system("cls");
	//gotoxy(20, 10);
	
	COORD Curor = { 20, 10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Curor);
	
	printf("ȭ�� �߾ӿ� ���ڿ��� ����մϴ�.\n");
}