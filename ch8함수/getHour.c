#include <stdio.h>
#include <time.h>

int GetHour()
{
	time_t t;
	time(&t);
	
	time_t base_time = 0;
	struct tm base_date_local;
	char buf[100];
	//�� ���� ���� ���� �ð�(DateTime)�� ���Ѵ�.
	localtime_s(&base_date_local, &base_time);

	struct tm* pt = &base_date_local; //localtime_s(&base_date_local, &t);
	return pt->tm_hour;
}
