//#include <windows.h>
#include <time.h>

#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))
#define delay(n) Sleep(n)

#ifdef _WIN32
    #define clrscr() system("cls")
    #define gotoxy(x,y) { COORD Cur = {x, y}; \
	    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);}
    #define showcursor(bShow) { CONSOLE_CURSOR_INFO CurInfo = {20, bShow}; \
	    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo); }
#endif

#ifdef __linux__
    #define clrscr() system("clear")
    #define gotoxy(x,y) printf("\x1b[%d;%df",y,x)
#endif

#pragma once
