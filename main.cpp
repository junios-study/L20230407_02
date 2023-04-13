#include <iostream>
#include "World.h"
#include "Player.h"
#include "Goal.h"


using namespace std;

//석현이 바보
int main()
{ 
	bool bIsRunning = true;
	//GameEngine
	UWorld* World = new UWorld();

	//Load
	World->SpawnActor(new APlayer());
	World->SpawnActor(new AGoal());

	while (bIsRunning) //Frame
	{
		//system("cls");
		World->Input();
		World->Tick();
		World->Render();
	}


	delete World;

	return 0;
}