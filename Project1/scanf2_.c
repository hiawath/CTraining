#include <stdio.h>

void scanf2_()
{
	int width, height;

	printf("사각형의 폭과 높이를 입력하세요 : ");
	scanf_s("%d%d", &width, &height);

	printf("사각형의 면적은 %d입니다. \n", width * height);
}