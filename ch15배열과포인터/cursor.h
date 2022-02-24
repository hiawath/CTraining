//#include <windows.h>
#include <time.h>
#ifdef __linux__
    #include <stdlib.h> 
    #include <unistd.h> 
#endif

#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))

#ifdef _WIN32
#define delay(n) Sleep(n)
    #define clrscr() system("cls")
    #define gotoxy(x,y) { COORD Cur = {x, y}; \
	    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);}
    #define showcursor(bShow) { CONSOLE_CURSOR_INFO CurInfo = {20, bShow}; \
	    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo); }
#endif

#ifdef __linux__
    #define delay(n) sleep(n)
    #define clrscr() system("clear")
    #define gotoxy(x,y) printf("\x1b[%d;%df",y,x)
#endif

#pragma once
