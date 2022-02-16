#include <stdio.h>
#include <conio.h>
#include "cursor.h"

int movesharp()
{
	int x = 40, y = 10;
	int ch;

	clrscr();




	for (;;) {
		gotoxy(x, y);
		_putch('#');
		ch = _getch();
		if (ch == 0xE0 || ch == 0) {
			ch = _getch();
			switch (ch) {
			case 75:
				x--;
				break;
			case 77:
				x++;
				break;
			case 72:
				y--;
				break;
			case 80:
				y++;
				break;
			}
		}
		else {
			switch (ch) {
			case ' ':
				clrscr();
				break;
			case 'q':
			case 'Q':
				exit(0);
			}
		}
	}
}