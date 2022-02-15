#include "ch4.h"
#include "cursor.h"
void main()
{
	enum origin { EAST, WEST, SOUTH, NORTH };
	enum origin mark = WEST;
	enum origin head = SOUTH;

	move(head);
	moveChar(mark);
	pointer();
	pointerCopy();
	printf_();
	widthalign();
	//scanf_();
	//scanf2_();
	//puts_();
	cursor();
}