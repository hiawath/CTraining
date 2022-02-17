#include <stdio.h>
#include "cursor.h"

int ascii2()
{
	gotoxy(34, 1);
	puts("ASCII Table");
	int ch = ' ';
	for (int x = 5; x < 80; x += 15) {
		for (int y = 3; y <= 21; y++) {
			gotoxy(x, y);
			printf("%3d  %X  %c", ch, ch, ch);
			ch++;
		}
	}
}