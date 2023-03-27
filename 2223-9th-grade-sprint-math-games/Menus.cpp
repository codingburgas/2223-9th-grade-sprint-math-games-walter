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
#include "Game.h"

using namespace std;

// Prints all game's levels numbers
void printGameLevels(int selectedLevel)
{
	printGameBoard();
	printKeyboard();

	outputPosition(7, 6);
	cout << "Choose your game level and";
	outputPosition(7, 7);
	cout << "learn about bitwise operators!";

	for (int i = 0; i <= 9; i++)
	{
		if (selectedLevel == i)
		{
			// Change selected option color
			color(4);
			outputPosition(2 * i + 12, 10);
			cout << i + 1 << " ";
			color(7);
		}
		else
		{
			color(7);
			outputPosition(2 * i + 12, 10);
			cout << i + 1 << " ";
		}
	}
}

// Prints main menu options
void printMenuOptions(string menuOptions[], int selectedOption, string name)
{
	outputPosition(7, 6);
	cout << "Hi " << name << "!";
	outputPosition(7, 7);
	cout << "Wellcome to the game!";
	for (int i = 0; i < 3; i++)
	{
		// Print arrow before selected option
		if (i == selectedOption)
		{
			outputPosition(16, i + 11);
			cout << "-> " << menuOptions[i];
		}

		// Print space before not selected option
		else
		{
			outputPosition(16, i + 11);
			cout << "   " << menuOptions[i];
		}
	}
}

// Main menu logic
void mainMenu(string menuOptions[], string name)
{
	// By default when you open the game you are hovering the first option
	int selectedOption = 0;
	char pressedKey = ' ';
	bool exitStatement = true;

	printGameBoard();
	printKeyboard();

	while (exitStatement)
	{
		printMenuOptions(menuOptions, selectedOption, name);
		pressedKey = _getch();

		// Moving up through the menu
		if (selectedOption != 0 && pressedKey == (char)72)
		{
			selectedOption--;
		}

		// Moving down through the menu
		if (selectedOption != 2 && pressedKey == (char)80)
		{
			selectedOption++;
		}

		printMenuOptions(menuOptions, selectedOption, name);

		// Choosing menu option
		if (pressedKey == '\r')
		{
			switch (selectedOption)
			{
				// Start game
			case 0:
				clearGameScreen();
				game(name);
				exitStatement = false;
				break;

				// Rules
			case 1:
				clearGameScreen();
				rules();
				clearGameScreen();
				break;

				// Exit
			case 2:

				exitStatement = false;
				system("CLS");
				cout << "Press any key to exit";
				break;

			default:
				break;
			}
		}
	}
}