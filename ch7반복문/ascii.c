#include <stdio.h>
#include "cursor.h"

int ascii()
{
	gotoxy(34, 1);
	puts("ASCII Table");
	for (int x = 5, y = 3, ch = ' '; ch <= 126; ch++, y++) {
		gotoxy(x, y);
		printf("%3d  %X  %c", ch, ch, ch);
		if (y == 21) {
			y = 2;
			x += 15;
		}
	}
}