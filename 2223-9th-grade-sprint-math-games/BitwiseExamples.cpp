#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h.>
#include "Output.h"
#include "Drawings.h"

using namespace std;

// Shows an example usage of bitwise AND
void logicAndExamples()
{
	outputPosition(9, 6);
	cout << "  Bitwise AND & example    ";

	int i = 10;
	int j = 9;

	clearGameScreen();

	outputPosition(i, j + 1);
	cout << "A = 10 = 1 0 1 0 (Binary)" << endl;

	outputPosition(i, j + 2);
	cout << "B = 11 = 1 0 1 1 (Binary)" << endl;

	outputPosition(i, j + 3);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(i, j + 4);
	cout << "A  & B = 1 0 1 0 (Decimal)" << endl;

	outputPosition(i, j + 5);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(7, 12);
	cout << "<";
}

// Shows an example usage of bitwise OR
void logicOrExamples()
{
	outputPosition(9, 6);
	cout << "   Bitwise OR | example   ";

	int i = 10;
	int j = 9;

	clearGameScreen();

	outputPosition(i, j + 1);
	cout << "A = 10 = 1 0 1 0 (Binary)" << endl;

	outputPosition(i, j + 2);
	cout << "B =  3 = 0 0 1 1 (Binary)" << endl;

	outputPosition(i, j + 3);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(i, j + 4);
	cout << "A  & B = 1 0 1 1 (Decimal)" << endl;

	outputPosition(i, j + 5);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;


	outputPosition(7, 12);
	cout << "<";
}

// Shows an example usage of bitwise XOR
void logicXorExamples()
{
	outputPosition(9, 6);
	cout << "   Bitwise XOR ^ example   ";

	int i = 10;
	int j = 9;

	clearGameScreen();

	outputPosition(i, j + 1);
	cout << "A = 14 = 1 1 1 0 (Binary)" << endl;

	outputPosition(i, j + 2);
	cout << "B =  7 = 0 1 1 1 (Binary)" << endl;

	outputPosition(i, j + 3);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(i, j + 4);
	cout << "A  & B = 1 0 0 1 (Decimal)" << endl;

	outputPosition(i, j + 5);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(7, 12);
	cout << "<";
}

// Shows an example usage of bitwise NOT
void logicNotExamples()
{
	outputPosition(9, 6);
	cout << "   Bitwise NOT ~ example   ";

	int i = 10;
	int j = 9;

	clearGameScreen();

	outputPosition(i, j + 1);
	cout << "A = 15 = 1 1 1 1 (Binary)" << endl;

	outputPosition(i, j + 2);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(i, j + 3);
	cout << "    ~A = 0 0 0 0 (Decimal)" << endl;

	outputPosition(i, j + 4);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(7, 12);
	cout << "<";
}

// Tests person's skilss on bitwise AND
void firstLevelTest(bool exitStatement)
{
	outputPosition(9, 6);
	cout << "    Bitwise AND & test   ";

	string answer;
	char pressedKey = ' ';

	int i = 10;
	int j = 9;

	clearGameScreen();

	outputPosition(i, j + 1);
	cout << "A = 10 = 1 0 1 0 (Binary)" << endl;

	outputPosition(i, j + 2);
	cout << "B =  7 = 0 1 1 1 (Binary)" << endl;

	outputPosition(i, j + 3);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(i, j + 4);
	cout << "A  & B = " << endl;

	outputPosition(i, j + 5);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	while (exitStatement)
	{
		outputPosition(19, 13);
		cout << "           ";

		outputPosition(19, 13);
		getline(cin, answer);

		if (answer == "0010" || answer == "10" || answer == "    1 0" || answer == "0 0 1 0")
		{
			clearGameScreen();

			outputPosition(9, 6);
			cout << "    Congratulations!   ";

			outputPosition(9, 7);
			cout << "                       ";

			exitStatement = false;

			outputPosition(9, 9);
			cout << "  Press any key to exit";

			pressedKey = _getch();

			clearGameScreen();
		}
	}
}

// Tests person's skilss on bitwise OR
void secondLevelTest(bool exitStatement)
{
	outputPosition(9, 6);
	cout << "     Bitwise OR | test   ";

	string answer;
	char pressedKey = ' ';

	int i = 10;
	int j = 9;

	clearGameScreen();

	outputPosition(i, j + 1);
	cout << "A = 14 = 1 1 1 0 (Binary)" << endl;

	outputPosition(i, j + 2);
	cout << "B =  3 = 0 0 1 1 (Binary)" << endl;

	outputPosition(i, j + 3);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(i, j + 4);
	cout << "A  | B = " << endl;

	outputPosition(i, j + 5);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	while (exitStatement)
	{
		outputPosition(19, 13);
		cout << "           ";

		outputPosition(19, 13);
		getline(cin, answer);

		if (answer == "1111" || answer == "1 1 1 1")
		{
			clearGameScreen();

			outputPosition(9, 6);
			cout << "    Congratulations!   ";

			outputPosition(9, 7);
			cout << "                       ";

			exitStatement = false;

			outputPosition(9, 9);
			cout << "  Press any key to exit";

			pressedKey = _getch();

			clearGameScreen();
		}
	}
}

// Tests person's skilss on bitwise XOR
void thirdLevelTest(bool exitStatement)
{
	outputPosition(9, 6);
	cout << "    Bitwise XOR ^ test   ";

	string answer;
	char pressedKey = ' ';

	int i = 10;
	int j = 9;

	clearGameScreen();

	outputPosition(i, j + 1);
	cout << "A =  6 = 0 1 1 0 (Binary)" << endl;

	outputPosition(i, j + 2);
	cout << "B = 11 = 1 0 1 1 (Binary)" << endl;

	outputPosition(i, j + 3);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(i, j + 4);
	cout << "A  ^ B = " << endl;

	outputPosition(i, j + 5);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	while (exitStatement)
	{
		outputPosition(19, 13);
		cout << "           ";

		outputPosition(19, 13);
		getline(cin, answer);

		if (answer == "1101" || answer == "1 1 0 1")
		{
			clearGameScreen();

			outputPosition(9, 6);
			cout << "    Congratulations!   ";

			outputPosition(9, 7);
			cout << "                       ";

			exitStatement = false;

			outputPosition(9, 9);
			cout << "  Press any key to exit";

			pressedKey = _getch();

			clearGameScreen();
		}
	}
}

// Tests person's skilss on bitwise NOT
void fourthLevelTest(bool exitStatement)
{
	outputPosition(9, 6);
	cout << "    Bitwise NOT ~ test     ";

	string answer;
	char pressedKey = ' ';

	int i = 10;
	int j = 9;

	clearGameScreen();

	outputPosition(i, j + 1);
	cout << "A = 10 = 1 0 1 0 (Binary)" << endl;

	outputPosition(i, j + 2);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	outputPosition(i, j + 3);
	cout << "    ~A = " << endl;

	outputPosition(i, j + 4);
	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	while (exitStatement)
	{
		outputPosition(19, 12);
		cout << "           ";

		outputPosition(19, 12);
		getline(cin, answer);

		if (answer == "0101" || answer == "101" || answer == "  1 0 1" || answer == "0 1 0 1")
		{
			clearGameScreen();

			outputPosition(9, 6);
			cout << "    Congratulations!   ";

			outputPosition(9, 7);
			cout << "                       ";

			exitStatement = false;

			outputPosition(9, 9);
			cout << "  Press any key to exit";

			pressedKey = _getch();

			clearGameScreen();
		}
	}
}