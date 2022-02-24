#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "서울/대전/대구/부산";
	char *ptr = strtok(str, "/");

	while (ptr != NULL) {
		puts(ptr);
		ptr = strtok(NULL, "/");
	}
}