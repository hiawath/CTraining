#include "main.h"
int main()
{
	int size1 = 42;
	int size2 = 30;

	printf("%d인치 모니터의 크기 : %.0fcm\n", size1, size1 * INCH);
	printf("%d인치 모니터의 크기 : %.0fcm\n", size2, size2 * INCH);

    printf("%d\n", DUBAE(3));
    printf("%d\n", JEGOP(3));

	clrscr();
	putsxy(2, 2, "left, top");
	putsxy(60, 2, "right, top");
	putsxy(60, 22, "right, bottom");
	putsxy(2, 22, "left, bottom");

    OutBoxMessage3("박스를 그리고 그 안에 문자열을 출력한다.");
	OutBoxMessage3("전달된 문자열의 길이에 적당한 박스를 스스로 계산한다.");
	OutBoxMessage3("신기하군");


}