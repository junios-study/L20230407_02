#include "Monster.h"

AMonster::AMonster()
{
	R = 255;
	G = 255;
	B = 0;
}

AMonster::AMonster(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	SortOrder = 4;

	R = 255;
	G = 255;
	B = 0;
}

AMonster::~AMonster()
{
}
