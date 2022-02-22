#include <stdio.h>

void MemoryTest()
{
	static int count = 0;

	count++;
	printf("%d번째 메모리 점검. 이상없음\n", count);
}