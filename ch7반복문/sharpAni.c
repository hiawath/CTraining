#include <stdio.h>
#include "cursor.h"

int sharAni()
{
	clrscr();

	for (int i = 1; i < 80; i++) {
		gotoxy(i, 10); putch('#');
		gotoxy(i - 1, 100); putch(' ');
		delay(10);
	}
}