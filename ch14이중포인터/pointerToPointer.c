#include <stdio.h>
int pointerTopointer()
{
	int var = 789;
	
	// pointer for var
	int* ptr2;
	
	// double pointer for ptr2
	int** ptr1;
	
	// storing address of var in ptr2
	ptr2 = &var;
	
	// Storing address of ptr2 in ptr1
	ptr1 = &ptr2;

	printf("초기 값 = %d\n", var);
  printf("단일 포인터 사용한 값 = %d\n", *ptr2);
  printf("단일 포인터 사용한 주소 = %p\n", &ptr2);

  printf("이중 포인터 사용한 주소 = %p\n", *ptr1);
  printf("이중 포인터 사용한 주소 = %p\n", &ptr1);
  printf("이중 포인터 사용한 값 = %d\n", *(*ptr1));
  printf("이중 포인터 사용한 값 = %d\n", **ptr1);
	
	return 0;
}
/* OUTPUT
초기 값 = 789
단일 포인터 사용한 값 = 789
단일 포인터 사용한 주소 = 000000167A1EF4A8
이중 포인터 사용한 주소 = 000000167A1EF484
이중 포인터 사용한 주소 = 000000167A1EF4C8
이중 포인터 사용한 값 = 789
이중 포인터 사용한 값 = 789
*/