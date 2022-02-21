#include <stdio.h>
#include <math.h>

void sinTest()
{
	int angle;

	for (angle = 0;angle <= 90;angle += 15) {
		printf("sin(%d도)=%lf\n", angle, sin((angle*M_PI)/180));
        printf("%f\n",sin((double)angle));
        
	}
}