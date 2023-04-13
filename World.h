#pragma once
#include <vector>
class AActor; //���漱��, ��� ���� ������ ���, ������

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	void SpawnActor(AActor* NewActor);

	virtual void Input();
	virtual void Tick();
	virtual void Render();

public:
	std::vector<AActor*> Actors;
};

