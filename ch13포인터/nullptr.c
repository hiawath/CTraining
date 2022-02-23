#include <stdio.h>
#include <string.h>

int nullptrTest ()
{
	char str[] = "korea";
	char *p;

	p = strchr(str,'r');
	if (p != NULL) {
		*p = 's';
	}
	puts(str);
	
	return 0;
}