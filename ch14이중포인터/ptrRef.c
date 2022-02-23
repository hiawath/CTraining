#include <stdio.h>
#include <malloc.h>
#include <string.h>

void InputName(char **pName)
{
	*pName = (char *)malloc(32);  // 동적메모리 할당 
	strcpy(*pName, "kim sang hyung");
}

int ptrRef()
{
	char *name;

	InputName(&name);
	printf("이름은 %s입니다\n", name);
	free(name);
    return 0;
}