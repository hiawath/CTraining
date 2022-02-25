#pragma once

#define ROW_MAX 18
#define COL_MAX 21

char gameStage[ROW_MAX][COL_MAX];
int myX, myY;

enum { ESC = 27, LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80 };
#define putchxy(x, y, c) {gotoxy(x, y);_putch(c);}
#define putsxy(x, y, s) {gotoxy(x, y);puts(s);}
char baseStage[18][21] = {
	"####################",
	"####################",
	"####################",
	"#####   ############",
	"#####O  ############",
	"#####  O############",
	"###  O O ###########",
	"### # ## ###########",
	"#   # ## #####  ..##",
	"# O  O   @      ..##",
	"##### ### # ##  ..##",
	"#####     ##########",
	"####################",
	"####################",
	"####################",
	"####################",
	"####################",
	"####################"
};

void prepareStage();
void findMypositin();
int gameLoop();
void redraw();
void clearScreen();
void gameOver();
