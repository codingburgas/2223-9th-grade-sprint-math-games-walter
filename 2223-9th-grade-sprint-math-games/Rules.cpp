#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h.>
#include "Output.h"
#include "Drawings.h"
#include "BitwiseExamples.h"
#include "GameLevels.h"

using namespace std;

// Prints game's rules
void rules()
{
	printGameBoard();
	printKeyboard();

	outputPosition(8, 6);
	cout << "RULES";

	outputPosition(8, 8);
	cout << "You can move using the ";
	outputPosition(8, 9);
	cout << "arrow keys and choosing by";
	outputPosition(8, 10);
	cout << "pressing Enter.";

	outputPosition(8, 11);
	cout << "You can look at the lessons";

	outputPosition(8, 12);
	cout << "as much as you want.";

	outputPosition(8, 13);
	cout << "By pressing Enter on the";

	outputPosition(8, 14);
	cout << "lessons you are entering";
	outputPosition(8, 15);
	cout << "a test";

	char pressedKey = ' ';
	outputPosition(8, 17);
	cout << "Press any key to exit";

	pressedKey = _getch();
}