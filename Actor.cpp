#include "Actor.h"
#include <iostream>
#include <windows.h>

using namespace std;

AActor::AActor()
    : X(1), Y(1), Shape(' ')
{
}

AActor::AActor(int NewX, int NewY, char NewShape)
{
    X = NewX;
    Y = NewY;
    Shape = NewShape;
}

AActor::~AActor()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
    COORD Pos;
    Pos.X = X;
    Pos.Y = Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

	cout << Shape << endl;
}
