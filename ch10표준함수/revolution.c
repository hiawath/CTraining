#include <stdio.h>
#include <math.h>
#include "cursor.h"

#ifdef _WIN32
	#include <conio.h>
#endif
#ifdef __linux__
	#include "linux_kbhit.h"
#endif


void revolution()
{
	int x = -1, y = -1;

	clrscr();
	gotoxy(40, 12);putchar('S');
	for (double angle = 0;linux_kbhit() == 0;angle += 10) {
		gotoxy(40 + x, 12 + y);putchar(' ');
		x = (int)(cos(angle*3.1416 / 180) * 20);
		y = (int)(sin(angle*3.1416 / 180) * 10);
		gotoxy(40 + x, 12 + y);putchar('E');
		delay(100);
	}
}