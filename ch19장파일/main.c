#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 256
int main() {

	FILE* f;
	
	char buf[BUFFER_SIZE];

	f = fopen("c:\Temp\\Text.txt", "r+t");
	if (f!=NULL)
	{
		fgets(buf, 256, f);
		printf("%s", buf);

		char* token = strtok(buf, "#");

		int value = atoi(token);
		value++;
		char temp[2];
		_itoa(value, temp, 10);

		memset(buf, 0, BUFFER_SIZE * sizeof(char));
		buf[0] ='#';

		strcat(buf, temp);
		//free(temp);

		fseek(f, 0, SEEK_SET);

		fputs(buf,f);
		fclose(f);
	}
}


/*
int main() {

	FILE* f;

	char* str = "�� ������ C ǥ�� �Լ��� ������ �ؽ�Ʈ �����Դϴ�.\n"
		"C����̺��� Temp ���丮�� Test.txt��� �̸����� �����˴ϴ�.\n";

	f = fopen("c:\\temp\\Text.txt", "wb");

	if (f==NULL)
	{
		puts("Error");
		return 1;
	}
	else {
		fputs(str, f);
		fclose(f);
	}


	char buf[256];

	f = fopen("c:\\temp\\Text.txt", "rb");
	if (f==NULL)
	{
		puts("Error");
		return 1;
	}
	else {
		for (;;) {
			if (fgets(buf,256,f)==NULL)
			{
				break;
			}
			printf("%s", buf);
		}

	}
	fclose(f);
}
*/