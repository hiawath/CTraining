#include <stdio.h>

int infinite()
{
	int num;

	for (;;) {
		printf("성적을 조회할 학생 번호를 입력하세요(끝낼 때는 0) : ");
		scanf_s("%d", &num);
		if (num == 0) break;
		printf("%d번 학생의 성적은 xx입니다.\n", num);
	}
	puts("수고하셨습니다.");
}