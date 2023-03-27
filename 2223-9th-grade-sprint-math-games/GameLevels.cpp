#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h.>
#include "Output.h"
#include "Drawings.h"
#include "BitwiseExamples.h"

using namespace std;

// Game's first level
void firstLevel()
{
	printGameBoard();
	printKeyboard();

	logicAndTruthTable();

	char pressedKey = ' ';
	int selectedPage = 0; // By default you are on the first page
	bool exitStatement = true;

	while (pressedKey != '\r')
	{
		pressedKey = _getch();

		// Moving up through the levels
		if (selectedPage != 0 && pressedKey == (char)75)
		{
			selectedPage--;
			logicAndTruthTable();
		}

		// Moving down through the levels
		if (selectedPage != 1 && pressedKey == (char)77)
		{
			selectedPage++;
			outputPosition(0, 0);
			logicAndExamples();
		}
	}
	clearGameScreen();
	firstLevelTest(exitStatement);
}

// Game's second level
void secondLevel()
{
	printGameBoard();
	printKeyboard();

	logicOrTruthTable();

	char pressedKey = ' ';
	int selectedPage = 0; // By default you are on the first page
	bool exitStatement = true;

	while (pressedKey != '\r')
	{
		pressedKey = _getch();

		// Moving up through the levels
		if (selectedPage != 0 && pressedKey == (char)75)
		{
			selectedPage--;
			logicOrTruthTable();
		}

		// Moving down through the levels
		if (selectedPage != 1 && pressedKey == (char)77)
		{
			selectedPage++;
			logicOrExamples();
		}
	}
	clearGameScreen();
	secondLevelTest(exitStatement);
}

// Game's third level
void thirdLevel()
{
	printGameBoard();
	printKeyboard();

	logicXorTruthTable();

	char pressedKey = ' ';
	int selectedPage = 0; // By default you are on the first page
	bool exitStatement = true;

	while (pressedKey != '\r')
	{
		pressedKey = _getch();

		// Moving up through the levels
		if (selectedPage != 0 && pressedKey == (char)75)
		{
			selectedPage--;
			outputPosition(0, 0);
			logicXorTruthTable();
		}

		// Moving down through the levels
		if (selectedPage != 1 && pressedKey == (char)77)
		{
			selectedPage++;
			outputPosition(0, 0);
			logicXorExamples();
		}
	}
	clearGameScreen();
	thirdLevelTest(exitStatement);
}

// Game's fourth level
void fourthLevel(string name)
{
	printGameBoard();
	printKeyboard();

	logicNotTruthTable();

	char pressedKey = ' ';
	int selectedPage = 0; // By default you are on the first page
	bool exitStatement = true;

	while (pressedKey != '\r')
	{
		pressedKey = _getch();

		// Moving up through the levels
		if (selectedPage != 0 && pressedKey == (char)75)
		{
			selectedPage--;
			outputPosition(0, 0);
			logicNotTruthTable();
		}

		// Moving down through the levels
		if (selectedPage != 1 && pressedKey == (char)77)
		{
			selectedPage++;
			outputPosition(0, 0);
			logicNotExamples();
		}
	}
	clearGameScreen();
	fourthLevelTest(exitStatement);
	system("CLS");
	printCertificate(name);
}