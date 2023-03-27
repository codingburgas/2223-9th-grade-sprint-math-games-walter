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
#include "Menus.h"

using namespace std;

int main()
{
	string name;
	printGameBoard();
	printKeyboard();

	string nameMessage1 = "Hello, Walter!";
	string nameMessage2 = "Please enter your name: ";

	outputPosition(7, 6);
	cout << nameMessage1;

	outputPosition(7, 7);
	cout << nameMessage2;

	outputPosition(7, 8);
	cin >> name;

	clearGameScreen();

	// String array with all the main menu options
	string mainMenuOptions[] = { "Start", "Rules", "Exit" };

	mainMenu(mainMenuOptions, name);
}