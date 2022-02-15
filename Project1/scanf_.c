#include <stdio.h>
/*
심각도	코드	설명	프로젝트	파일	줄	비표시 오류(Suppression) 상태
오류	C4996	'scanf': This function or variable may be unsafe.
Consider using scanf_s instead.
To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
See online help for details.Project1	
**/
//#define _CRT_SECURE_NO_WARNINGS



void scanf_() {
	int age;
	float height;
	char name[32];

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	printf("키를 입력하세요 : ");
	scanf_s("%f", &height);
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name) / sizeof(name[0]));

	printf("안녕하세요. %d살, 키 %.2fcm의 %s님\n", age, height, name);
}