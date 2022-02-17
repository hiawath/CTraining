#include <stdio.h>

int nest()
{
	for (int dan = 1; dan <= 3; dan++) {
		for (int hang = 1; hang <= 3; hang++) {
			printf("%d * %d = %d\n", dan, hang, dan * hang);
		}
		puts("");
	}
}