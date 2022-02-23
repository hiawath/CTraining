#include <stdio.h>

void twoArray()
{
	int arScore[3][4] = {
		{ 92, 88, 76, 100 },
		{ 88, 74, 98, 50 },
		{ 66, 77, 94, 70 },
	};

	for (int c = 0;c < 3;c++) {
		int sum = 0;
		for (int s = 0;s < 4;s++) {
			sum += arScore[c][s];
		}
		printf("%d반 : 총점 = %d점, 평균 = %.2f점\n",c + 1, sum, sum / 4.0);
	}
}