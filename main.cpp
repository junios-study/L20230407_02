#include <iostream>
#include "World.h"
#include "Player.h"
#include "Goal.h"


using namespace std;

int main()
{
	UWorld* World = new UWorld();

	World->SpawnActor(new APlayer());
	World->SpawnActor(new AGoal());

	delete World;

	return 0;
}