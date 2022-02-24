#include <stdio.h>

struct SHuman
{
	char name[12];
	int age;
	double height;
};

struct SBook
{
	char title[20];
	int pages;
	struct SHuman author;
};

int structNest()
{
	struct SBook api = {
		"윈도우즈 API 정복", 2100, 
		{"김상형", 48, 178 }
	};

	printf("저자 = %s\n", api.author.name);
    return 0;
}