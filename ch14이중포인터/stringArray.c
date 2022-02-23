#include <stdio.h>
#include <malloc.h>
#include <string.h>

int stringArray()
{
	int len = 10, num = 5, i;
	char **name;

	name = (char **)malloc(num * sizeof(char *));
	for (i = 0;i < num;i++) {
		name[i] = (char *)malloc(len * sizeof(char));
	}

	for (i = 0;i < num;i++) {
		sprintf(name[i], "string %d", i);
		puts(name[i]);
	}

	for (i = 0;i < num;i++) {
		free(name[i]);
	}
	free(name);
    return 0;
}