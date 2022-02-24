#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "main.h"

struct SHuman
{
	char *name;
	int age;
	double height;
};

int deepCopy()
{
	struct SHuman kim = { NULL, 30, 160 };
	kim.name = (char *)malloc(30);
	strcpy(kim.name, "김유신");

	struct SHuman lee = kim;
	lee.name = (char *)malloc(30);
	strcpy(lee.name, kim.name);

	strcpy(lee.name, "이순신");

	printf("%s : %d세, 키 %.2f\n", kim.name, kim.age, kim.height);
	printf("%s : %d세, 키 %.2f\n", lee.name, lee.age, lee.height);

	free(kim.name);
	free(lee.name);

    return 0;
}