#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h.>
#include "Output.h"
#include "Drawings.h"
#include "BitwiseExamples.h"
#include "GameLevels.h"
#include "Rules.h"
#include "Menus.h"

using namespace std;

// Game
void game(string name)
{
	// By default you are hovering the first level
	int selectedLevel = 0;
	char pressedKey = ' ';

	bool exitStatement = true;

	while (exitStatement)
	{
		printGameLevels(selectedLevel);
		pressedKey = _getch();

		// Moving up through the levels
		if (selectedLevel != 0 && pressedKey == (char)75)
		{
			selectedLevel--;
		}

		// Moving down through the levels
		if (selectedLevel != 9 && pressedKey == (char)77)
		{
			selectedLevel++;
		}

		printGameLevels(selectedLevel);

		// Choosing level
		if (pressedKey == '\r')
		{
			switch (selectedLevel)
			{
				// First level
			case 0:
				clearGameScreen();
				firstLevel();
				break;

				// Second level
			case 1:
				clearGameScreen();
				secondLevel();
				break;

				// Third level
			case 2:
				clearGameScreen();
				thirdLevel();
				break;

				// Fourth level
			case 3:
				clearGameScreen();
				fourthLevel(name);
				exitStatement = false;
				break;

				// Fifth level
			case 4:
				clearGameScreen();
				break;

				// Sixth level
			case 5:
				clearGameScreen();
				break;

				// Seventh level
			case 6:
				clearGameScreen();
				break;

				// Eigth level
			case 7:
				clearGameScreen();
				break;

				// Nineth level
			case 8:
				clearGameScreen();
				break;

				// Tenth level
			case 9:
				clearGameScreen();
				break;

			default:
				break;
			}
		}
	}
}