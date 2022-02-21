#include <stdio.h>
#include <time.h>

void timeFormat()
{
	time_t now;
	struct tm *pt;

	time(&now);
	pt = localtime(&now);
	printf("현재 시간 %d년 %d월 %d일 %d시 %d분 %d초입니다.\n",
		pt->tm_year+1900,pt->tm_mon+1,pt->tm_mday,
		pt->tm_hour,pt->tm_min,pt->tm_sec);
}