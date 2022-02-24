#include <stdio.h>

struct SHuman
{
	char name[12];
	int age;
	double height;
};

int structInit()
{
	struct SHuman staff[] = {
		{ "문종민", 46, 178.5},
		{ "노정란", 45, },
		{ "문찬영", 7, 123.4},
		{ "권성직", 58, 172.0 },
		{ "최상미", 41, 165.0 },
		{ "이한승",  },
		{ "김기남", 49, 162.0 },
		{ "박수빈",  },
		{  19,  },
	};
		
	printf("이름 = %s, 나이 = %d\n", staff[4].name, staff[4].age);
    return 0;
}