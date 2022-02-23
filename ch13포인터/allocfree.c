#include <stdio.h>
#include <malloc.h>

int allocfree()
{
	int *arScore;
	int i, num;
	int sum;

	printf("학생수를 입력하세요 : ");
	scanf("%d", &num);
	arScore = (int *)malloc(num * sizeof(int));
	if (arScore == NULL) {
		printf("메모리가 부족합니다.\n");
		return 0;
	}

	for (i = 0;i < num;i++) {
		printf("%d번 학생의 성적을 입력하세요 : ", i + 1);
		scanf("%d", &arScore[i]);
	}

	sum = 0;
	for (i = 0;i< num;i++) {
		sum += arScore[i];
	}

	printf("\n총점= %d, 평균 = %d.\n", sum, sum / num);
	free(arScore);

	return 0;
}