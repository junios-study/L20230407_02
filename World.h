#pragma once
#include <vector>
class AActor; //���漱��, ��� ���� ������ ���, ������

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	void SpawnActor(AActor* NewActor);

	virtual void Tick();
	virtual void Render();

	void Sort();

public:
	std::vector<AActor*> Actors;
};

