#include <stdio.h>
#include <conio.h>
#include "cursor.h"
#include "main.h"

int main() {

	prepareStage();
	findMypositin();
	clearScreen();
	while (gameLoop()) {
		
	}
	
	gameOver();
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

	redraw();

	int dx = 0, dy = 0;

	int ch = _getch();
	if (ch==0xE0 || ch ==0)
	{
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

		//���� �ƴϾ���Ѵ�.
		if (gameStage[myY+dy][myX+dx]!='#')
		{
			// ���� �̴� ���
			if (gameStage[myY + dy][myX + dx] == 'O')
			{
				//�� ���� ĭ�� ��� �ְų�, â���̾�� �Ѵ�. 

			}

			//������ϰ��
			myX += dx;
			myY += dy;

		}

		

		
	}
	else if (ch == ESC) {
		return 0;
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
	putsxy(45, 2, "���ڹ�");
	putsxy(45, 4, "ESC : ����");
}
void gameOver() {

}