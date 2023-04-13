#define _CRT_SECURE_NO_WARNINGS 

#include "GameEngine.h"
#include "World.h"
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include "Monster.h"

#include <iostream>

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

void GameEngine::Load(std::string Filename)
{
    FILE* file;
    char c;

    file = fopen(Filename.c_str(), "r");
    int PositionX = 1;
    int PositionY = 1;
    while ((c = fgetc(file)) != EOF)
    {
        if (c == '*')
        {
            GetWorld()->SpawnActor(new AWall(PositionX, PositionY));
            //GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
            //printf("��");
        }
        else if (c == ' ')
        {
            GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
            //printf("�ٴ�");
        }
        else if (c == 'P')
        {
            GetWorld()->SpawnActor(new APlayer(PositionX, PositionY));
            //printf("�÷��̾�");
        }
        else if (c == 'G')
        {
            GetWorld()->SpawnActor(new AGoal(PositionX, PositionY));
            //printf("��ǥ");
        }
        else if (c == 'M')
        {
            GetWorld()->SpawnActor(new AMonster(PositionX, PositionY));
            //printf("����");
        }
        if (c == '\n')
        {
            ++PositionY;
            PositionX = 0;
            //printf("�ٹٲ�");
        }
        //printf("%d, %d\n", PositionX, PositionY);

        ++PositionX;
    }

    fclose(file);
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
