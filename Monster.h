#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	AMonster();
	AMonster(int NewX, int NewY, char NewShape = 'P');

	virtual ~AMonster();
};

