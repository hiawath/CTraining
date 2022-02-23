#include <stdio.h>

int main(int argc, char **argv, char **env)
{
	printf("전달된 인수의 개수 = %d\n", argc);
	for (int i = 0;i < argc;i++) {
		printf("%d번째 인수 = %s\n", i, argv[i]);
	}

    ptrptr();
    pointerTopointer();
    ptrRef();
    stringArray();
    //int returnValue = calcArg(int argc, char **argv);
    //printf("rerutn : %d\n",returnValue);
}