#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h.>

using namespace std;

// Up - 72
// Down - 80
// Left - 75
// Right - 77


// Output coordinates manipulation function
void outputPosition(int x, int y)
{
	COORD position;
	position.X = x;
	position.Y = y;
	if (SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position))
	{
		return;
	}
}

// Output color manipulation function
void color(int color)
{
	if (SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color))
	{
		return;
	}
}

void printGameLevels(int selectedLevel)
{
	for (int i = 0; i <= 9; i++)
	{
		if (selectedLevel == i)
		{
			// Change selected option color
			color(4);
			outputPosition(2 * i, 1);
			cout << i + 1 << " ";
		}

		else
		{
			color(7);
			outputPosition(2 * i, 1);
			cout << i + 1 << " ";
		}
	}
}

void firstLevel()
{
	// Game level
	cout << "Bitwise AND ""&""" << endl;

	//Bitwise "AND" truth table 
	cout << char(218) << char(196) << char(196) << char(196) << char(194);
	cout << char(196) << char(196) << char(196) << char(194) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(191) << endl;

	cout << char(179) << " A " << char(179) << " B " << char(179) << " RESULT " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 0 " << char(179) << " 0 " << char(179) << "   0    " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 0 " << char(179) << " 1 " << char(179) << "   0    " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 1 " << char(179) << " 0 " << char(179) << "   0    " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 1 " << char(179) << " 1 " << char(179) << "   1    " << char(179) << endl;

	cout << char(192) << char(196) << char(196) << char(196) << char(193);
	cout << char(196) << char(196) << char(196) << char(193) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(217) << endl;
}

void secondLevel()
{
	// Game level
}

void thirdLevel()
{
	// Game level
}

void fourthLevel()
{
	// Game level
}

void fifthLevel()
{
	// Game level
}

void sixthLevel()
{
	// Game level
}

void seventhLevel()
{
	// Game level
}

void eighthLevel()
{
	// Game level
}

void ninethLevel()
{
	// Game level
}

void tenthLevel()
{
	// Game level
}

void game()
{
	// By default you are hovering the first level
	int selectedLevel = 0;
	char pressedKey = ' ';

	printGameLevels(selectedLevel);

	bool exitStatement = true;

	while (exitStatement)
	{
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
				system("CLS");
				firstLevel();
				break;

				// Second level
			case 1:
				system("CLS");
				secondLevel();
				break;

				// Third level
			case 2:
				system("CLS");
				thirdLevel();
				break;

				// Fourth level
			case 3:
				system("CLS");
				thirdLevel();
				break;

				// Fifth level
			case 4:
				system("CLS");
				fifthLevel();
				break;

				// Sixth level
			case 5:
				system("CLS");
				sixthLevel();
				break;

				// Seventh level
			case 6:
				system("CLS");
				seventhLevel();
				break;

				// Eigth level
			case 7:
				system("CLS");
				eighthLevel();
				break;

				// Nineth level
			case 8:
				system("CLS");
				ninethLevel();
				break;

				// Tenth level
			case 9:
				system("CLS");
				tenthLevel();
				break;

				/*case 11:
				exitStatement = false;
				system("CLS");
				cout << "Press any key to exit";
				break;*/

			default:
				break;
			}
		}
	}
}

void printMenuOptions(string menuOptions[], int selectedOption)
{
	for (int i = 0; i < 3; i++)
	{
		// Print arrow before selected option
		if (i == selectedOption)
		{
			outputPosition(1, i + 1);
			cout << "-> " << menuOptions[i];
		}

		// Print space before not selected option
		else
		{
			outputPosition(1, i + 1);
			cout << "   " << menuOptions[i];
		}
	}
}

void mainMenu(string menuOptions[])
{
	// By default when you open the game you are hovering the first option
	int selectedOption = 0;
	char pressedKey = ' ';
	bool exitStatement = true;

	printMenuOptions(menuOptions, selectedOption);

	while (exitStatement)
	{
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

		printMenuOptions(menuOptions, selectedOption);

		// Choosing menu option
		if (pressedKey == '\r')
		{
			switch (selectedOption)
			{
				// Start game
			case 0:
				system("CLS");
				game();
				break;

				// Rules
			case 1:
				system("CLS");
				cout << "Rules";
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

int main()
{
	string name;
	cout << "Hello, please enter your name here: ";
	cin >> name;

	system("CLS");

	string mainMenuOptions[] = { "Start", "Rules", "Exit" }; // String array with all the main menu options

	mainMenu(mainMenuOptions);
}