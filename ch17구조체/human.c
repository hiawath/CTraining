#include <stdio.h>
#include <string.h>

int human()
{
	typedef struct SHuman
	{
		char name[12];
		int age;
		double height;
	} SHuman;

    SHuman kim,lee;

	strcpy(kim.name, "sang hyung");
	kim.age = 29;
	kim.height = 181.4;

    lee=kim;

	printf("이름 = %s, 나이는 = %d\n", kim.name, kim.age);
    printf("이름 = %s, 나이는 = %d\n", lee.name, lee.age);
    return 0;
}