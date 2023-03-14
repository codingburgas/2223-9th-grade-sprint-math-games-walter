#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h.>

using namespace std;

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
	int selectedOption = 0; // By default when you open the game you are hovering the first[0] option
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
				cout << "Start";
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
	int selectedOption = 0;

	mainMenu(mainMenuOptions);
}