#include <time.h>
#ifdef __linux__
    #include <stdlib.h> 
    #include <unistd.h> 
#endif

//#include <windows.h>
#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))


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
    #define showcursor(bShow){}

    #define FALSE 0 
    #define TRUE !(FALSE)
    
    #define putchxy(x, y, c) {gotoxy(x, y);putchar(c);}
    #define putsxy(x, y, s) {gotoxy(x, y);puts(s);}
    enum { QUIT =0x51, quit=0x71 ,ESC = 27, LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80 };

    #define BX 5
    #define BY 1
    #define BW 10
    #define BH 20
#endif

#pragma once
