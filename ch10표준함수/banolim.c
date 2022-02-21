#include <stdio.h>
#include <math.h>

#define banolim(x,dig) (floor((x)*pow(10.0,dig)+0.5)/pow(10.0,dig))

void banolim_()
{
	double x = 123.456789;
	int i;

	for (i = -2;i < 5;i++) {
		//printf("%lf의 %d자리 반올림 = %f \n",x,i,banollim(x,i));
	}
}