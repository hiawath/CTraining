#include <stdio.h>
//#include <conio.h>

#include <stdbool.h>
#include <string.h>

#include "cursor.h"




char arStage[18][21] = {
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
char ns[18][21];
int nx, ny;

int sokoban()
{
	int ch;
	int x, y;
	int dx, dy;
	bool bEnd;

	showcursor(FALSE);

	// 게임판 초기화
	memcpy(ns, arStage, sizeof(ns));
	for (y = 0;y < 18;y++) {
		for (x = 0;x < 20;x++) {
			// 주인공의 위치 찾아 놓는다.
			if (ns[y][x] == '@') {
				nx = x;
				ny = y;
				ns[y][x] = ' ';
			}
		}
	}
	clrscr();
	putsxy(45, 2, "SOKOBAN");
	putsxy(45, 4, "Q or q:종료");

	// 게임 진행 루프
	for (;;) {
		// 화면을 그린다.
		for (y = 0;y < 18;y++) {
			putsxy(0, y, ns[y]);
		}
		putchxy(nx, ny, '@');
 
		// 주인공 이동
		ch = getch();
		if (ch == 0xE0 || ch == 0 || ch ==ESC ) {
			ch = getch();
			dx = dy = 0;
			switch (ch) {
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
            
            case quit:
            case QUIT:
                return 0;
                break;

			}

			// 벽이 아니어야 한다.
			if (ns[ny + dy][nx + dx] != '#') {
				// 짐을 미는 경우
				if (ns[ny + dy][nx + dx] == 'O') {
					// 그 다음 칸이 비어 있거나 창고여야 한다. 
					if (ns[ny + dy * 2][nx + dx * 2] == ' ' || 
						ns[ny + dy * 2][nx + dx * 2] == '.') {
						if (arStage[ny + dy][nx + dx] == '.') {
							ns[ny + dy][nx + dx] = '.';
						} else {
							ns[ny + dy][nx + dx] = ' ';
						}
						ns[ny + dy * 2][nx + dx * 2] = 'O';
					} else {
						dx = dy = 0;
					}
				}
				// 새 위치로 이동
				nx += dx;
				ny += dy;
			}
		} else {
			if (ch == ESC) {
				break;
			}
            if (ch == QUIT || ch == quit  ) {
                printf("End\n");
				break;
			}
		}

		// 게임 끝 처리
		bEnd = TRUE;
		for (y = 0;y < 18;y++) {
			for (x = 0;x < 20;x++) {
				if (ns[y][x] == '.') {
					bEnd = FALSE;
				}
			}
		}

		if (bEnd) {
			clrscr();
			putsxy(10, 10, "참 잘했어요");
			delay(2000);
			break;
		}
	}
	showcursor(TRUE);
}