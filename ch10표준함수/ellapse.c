#include <stdio.h>
#include <time.h>
#include "cursor.h"

void ellapse()
{
	clock_t t1, t2;

	t1 = clock();
	for (int i = 0; i < 1000; i++) {
		printf("%d번째 줄\n", i);
        
	}
    delay(1);
	t2 = clock();

	double worktime = (t2 - t1) / (double)CLOCKS_PER_SEC;
	printf("%f초 걸림\n", worktime);
}