#include <stdio.h>

int aunion3()
{
	enum PartType { HDD, MONITOR, KEYBOARD };
	struct SPart {
		enum PartType type;
		int price;
		char maker[32];
		union {
			int capacity;
			int size;
			int keynum;
		};
	};

	struct SPart wd = { HDD, 12, "웬디", 2000 };
	struct SPart lcd = { MONITOR, 54, "삼성", 32};
	struct SPart blue = { KEYBOARD, 16, "레오폴드", 104 };

	printf("하드 용량 = %d기가\n", wd.capacity);
	printf("모니터 크기 = %d인치\n", lcd.size);
	printf("키 개수 = %d키\n", blue.keynum);
}