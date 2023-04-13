#pragma once
class GameEngine
{
public:
	GameEngine();
	virtual ~GameEngine();

	void Run();
	void Stop();

protected:
	void Input();
	void Tick();
	void Render();

	class UWorld* World;
};

