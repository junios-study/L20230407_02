#include "Wall.h"

AWall::AWall()
{
	bIsCollision = true;
	R = 255;
	G = 0;
	B = 0;
}

AWall::AWall(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	bIsCollision = true;
	SortOrder = 2;

	R = 255;
	G = 0;
	B = 0;

}

AWall::~AWall()
{
}
