#include <stdio.h>

void putchs(int ch, int n)
{
	for (int i = 0;i < n;i++) {
		putchar(ch);
	}
	puts("");
}

void OutBoxMessage3(char *str)
{
	int len = strlen(str);
	putchs('-', len + 4);
	printf("| %s |\n", str);
	putchs('-', len + 4);
}