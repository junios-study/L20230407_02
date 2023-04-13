#pragma once
class GameEngine
{
public:
	GameEngine();
	virtual ~GameEngine();

	virtual void Init();
	void Run();
	void Stop();

	inline class UWorld* GetWorld() const { return World; }

protected:
	void Input();
	void Tick();
	void Render();

	bool bIsRunning = true;

	class UWorld* World;
};

