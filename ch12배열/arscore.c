#include <stdio.h>

void arscore()
{
	int arScore[5];
	int sum = 0;

	for (int i = 0;i < 5;i++) {
		printf("%d번 학생의 성적을 입력하세요 : ",i+1);
		scanf("%d",&arScore[i]);
		sum += arScore[i];
	}

	printf("\n총점 = %d, 평균 = %.2f점입니다.\n", sum,sum / 5.0);
}