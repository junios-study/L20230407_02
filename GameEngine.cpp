#include "GameEngine.h"
#include "World.h"

GameEngine::GameEngine()
{
	bIsRunning = true;
	World = nullptr;
}

GameEngine::~GameEngine()
{
	if (World != nullptr)
	{
		delete World;
		World = nullptr;
	}
}

void GameEngine::Init()
{
	World = new UWorld();
}

void GameEngine::Run()
{
	while (bIsRunning) //Frame
	{
		//system("cls");
		Input();
		Tick();
		Render();
	}
}

void GameEngine::Stop()
{
	bIsRunning = false;
}

void GameEngine::Input()
{
	World->Input();

}

void GameEngine::Tick()
{
	World->Tick();

}

void GameEngine::Render()
{
	World->Render();
}
