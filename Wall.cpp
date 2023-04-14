#include "Wall.h"

AWall::AWall()
{
	bIsCollision = true;
}

AWall::AWall(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	bIsCollision = true;
	SortOrder = 2;

}

AWall::~AWall()
{
}
