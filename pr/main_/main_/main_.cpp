#include "raylib.h"
#include "functions.h"
#include <iostream>
#include <vector>

using namespace std;

const int screenWidth = 1000;
const int screenHeight = 500;



void mainSettings()
{

}

int main()
{
	bool isClosed = false;
	bool game = false;
	int temp = 0;

	InitWindow(screenWidth, screenHeight, "NAME");
		
	SetTargetFPS(60);
	

	while (!isClosed)
	{
		if (game == true)
		{
			mainGame(&isClosed);
		}
		else
		{
			mainMenu(&game, &isClosed);
		}
	}
	
	        
	CloseWindow();
		
	
}