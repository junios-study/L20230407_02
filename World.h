#pragma once
#include <vector>
class AActor; //���漱��, ��� ���� ������ ���, ������

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	void SpawnActor(AActor* NewActor);

public:
	std::vector<AActor*> Actors;
};

