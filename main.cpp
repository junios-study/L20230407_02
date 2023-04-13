#include <iostream>
#include "MyGameEngine.h"

using namespace std;

int main()
{ 
	MyGameEngine* Engine = new MyGameEngine();

	Engine->Init();
	Engine->Run();


	delete Engine;


	return 0;
}