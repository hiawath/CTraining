#include <stdio.h>
#include <conio.h>
#include "cursor.h"
#include "main.h"

int main() {

	prepareStage();
	findMypositin();
	clearScreen();
	while (gameLoop() && gameOver()) {
		redraw();
	}
	
	showcursor(TRUE);
	return 0;


}

void prepareStage() {
	showcursor(FALSE);
	memcpy(gameStage, baseStage, sizeof(gameStage));
}

void findMypositin() {
	for (myY = 0; myY < ROW_MAX; myY++)
	{
		for (myX = 0; myX < COL_MAX-1; myX++)
		{
			if (gameStage[myY][myX] == '@')
			{
				gameStage[myY][myX] = ' ';
				return;
			}
		}
	}

}
int gameLoop() {
	
	

	int dx = 0, dy = 0;

	int ch = _getch();
	if (ch==0xE0 || ch ==0)
	{
		putsxy(45, 7, "    ");
		ch = _getch();

		switch (ch)
		{
		case LEFT:
			dx = -1;
			break;
		case RIGHT:
			dx = 1;
			break;
		case UP:
			dy = -1;
			break;
		case DOWN:
			dy = 1;
			break;
		default:
			break;
		}

		//벽이 아니어야한다.
		if (gameStage[myY+dy][myX+dx]!='#')
		{ 
			
			// 짐을 미는 경우
			if (gameStage[myY + dy][myX + dx] == 'O')
			{
				//그 다음 칸이 비어 있거나, 창고이어야 한다. 
				if (gameStage[myY + dy * 2][myX + dx * 2] == ' ' || gameStage[myY + dy * 2][myX + dx * 2] == '.') {
					
					//UNDO
					memcpy(undoStage, gameStage, sizeof(gameStage));
					undoX = myX;
					undoY = myY;
					
					if (baseStage[myY+dy][myX+dx]=='.') {
						gameStage[myY + dy][myX + dx] = '.';
					}
					else {
						gameStage[myY + dy][myX + dx] = ' ';
					}

					gameStage[myY + dy*2][myX + dx*2] = 'O';
				}
				else {
					dx = dy = 0;
				}

			}

			//빈공간일경우
			myX += dx;
			myY += dy;

		}

		

		
	}
	else if (ch == ESC) {
		return 0;
	}
	else if (ch == UNDO ||ch==undo)
	{
		putsxy(45, 7, "UNDO");
		memcpy(gameStage, undoStage, sizeof(gameStage));
		myX = undoX;
		myY = undoY;
		redraw();
	}
	return 1;
}
void redraw()
{
	for (int y = 0; y < ROW_MAX; y++) {
		putsxy(0, y, gameStage[y]);
		
	}
	putchxy(myX, myY, '@');

}
void clearScreen()
{
	clrscr();
	putsxy(45, 2, "소코반");
	putsxy(45, 4, "ESC : 종료");
}
int gameOver() {
	BOOL end = TRUE;
	for (int y = 0; y < ROW_MAX; y++)
	{
		for (int x = 0; x < COL_MAX; x++)
		{
			if (gameStage[y][x]=='.')
			{
				end = FALSE;
			}
		}
	}

	if (end) {
		clrscr();
		putsxy(10, 10, "참 잘했어요");
		delay(2000);
		return 0;
	}
	return 1;
}