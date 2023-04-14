#include "Floor.h"

AFloor::AFloor()
{
	R = 200;
	G = 200;
	B = 200;
}

AFloor::AFloor(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	R = 200;
	G = 200;
	B = 200;

	SortOrder = 1;
}

AFloor::~AFloor()
{
}
