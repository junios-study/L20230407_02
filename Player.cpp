#include "Player.h"
#include "MyGameEngine.h"

APlayer::APlayer()
{
	Shape = 'P';
	X = 2;
	Y = 2;
}

APlayer::APlayer(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	SortOrder = 3;
}

void APlayer::Tick()
{
	switch (GEngine->KeyCode)
	{
		case 'w':
			Y--;
			break;
		case 's':
			Y++;
			break;
		case 'a':
			X--;
			break;
		case 'd':
			X++;
			break;
		case 'q':
			GEngine->Stop();
			break;
	}
}

APlayer::~APlayer()
{
}
