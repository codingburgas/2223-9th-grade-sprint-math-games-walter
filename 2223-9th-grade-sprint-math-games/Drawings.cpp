#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <conio.h.>
#include "Output.h"

using namespace std;

// Prints certificate for compleating the game
void printCertificate(string name)
{
	outputPosition(2, 2);
	cout << char(218);
	for (int i = 0; i < 60; i++)
	{
		cout << char(196);
	}
	cout << char(191);

	for (int i = 0; i < 18; i++)
	{
		outputPosition(2, 3 + i);
		cout << char(179);
		for (int i = 0; i < 60; i++)
		{
			cout << " ";
		}
		cout << char(179);
	}

	outputPosition(2, 21);
	cout << char(192);
	for (int i = 0; i < 60; i++)
	{
		cout << char(196);
	}
	cout << char(217);

	outputPosition(13, 3);
	cout << "This is your certificate for compleating";

	outputPosition(16, 4);
	cout << "our course about bitwise operators!";

	outputPosition(20, 6);
	cout << "You can screenshot it now!";

	outputPosition(9, 9);
	cout << "Congratulations " << name << " for compleating out course!";

	outputPosition(5, 13);
	cout << "Bitwise operators OOD";

	outputPosition(5, 14);
	cout << "Yana Ilcheva";

	outputPosition(5, 16);
	cout << "Signature: BO-OOD";

	outputPosition(33, 16);
	cout << "Your signature (here): ";

	char pressedKey = ' ';

	outputPosition(20, 19);
	cout << "  Press any key to exit!";

	pressedKey = _getch();
}

// Prints game board as old calculator
void printGameBoard()
{
	outputPosition(0, 0);
	cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(191);

	outputPosition(0, 1);
	cout << char(179) << "  " << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << " CASIO FB-14P3                   " << "  " << char(179);

	outputPosition(0, 2);
	cout << char(179) << "  " << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << " PACKAPO 23K89          " << char(219) << " " << char(219) << " " << char(219);
	cout << " " << char(219) << " " << char(219) << "  " << char(179);

	outputPosition(0, 3);
	cout << char(179) << "                                        " << "  " << char(179);

	outputPosition(0, 4);
	cout << char(179) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 5);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 6);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 7);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 8);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 9);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 10);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 11);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 12);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 13);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 14);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 15);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 16);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 17);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 18);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 19);
	cout << char(179) << "  " << char(219) << char(219) << "                                  ";
	cout << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 20);
	cout << char(179) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	cout << char(219) << char(219) << char(219) << char(219) << "  " << char(179);

	outputPosition(0, 21);
	cout << char(179) << " /" << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << "\\" << " " << char(179);

	outputPosition(0, 22);
	cout << char(179) << "                                        " << "  " << char(179);

	outputPosition(0, 23);
	cout << char(195) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(180);

	outputPosition(0, 24);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 25);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 26);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 27);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 28);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 29);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 30);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 31);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 32);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 33);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 34);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 35);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 36);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 37);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 38);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 39);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 40);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 41);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 42);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 43);
	cout << char(179) << "                                          " << char(179);
	outputPosition(0, 44);
	cout << char(179) << "                                          " << char(179);

	outputPosition(0, 45);
	cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(217);
}

// Prints calculator's keys
void printKeyboard()
{
	int i = 24;
	int j = 4;

	outputPosition(j, i + 0);
	cout << " ____   ____   ____     ____   ____" << endl;

	outputPosition(j, i + 1);
	cout << "||MR|| ||M-|| ||M+||   ||CE|| ||ON||" << endl;

	outputPosition(j, i + 2);
	cout << "||__|| ||__|| ||__||   ||__|| ||__||" << endl;

	outputPosition(j, i + 3);
	cout << "|/__\\| |/__\\| |/__\\|   |/__\\| |/__\\|" << endl;

	outputPosition(j, i + 4);
	cout << " ____   ____   ____     ____   ____" << endl;

	outputPosition(j, i + 5);
	cout << "|| 7|| || 8|| || 9||   || %|| || &||" << endl;

	outputPosition(j, i + 6);
	cout << "||__|| ||__|| ||__||   ||__|| ||__||" << endl;

	outputPosition(j, i + 7);
	cout << "|/__\\| |/__\\| |/__\\|   |/__\\| |/__\\|" << endl;

	outputPosition(j, i + 8);
	cout << " ____   ____   ____     ____   ____" << endl;

	outputPosition(j, i + 9);
	cout << "|| 4|| || 5|| || 6||   || X|| || /||" << endl;

	outputPosition(j, i + 10);
	cout << "||__|| ||__|| ||__||   ||__|| ||__||" << endl;

	outputPosition(j, i + 11);
	cout << "|/__\\| |/__\\| |/__\\|   |/__\\| |/__\\|" << endl;

	outputPosition(j, i + 12);
	cout << " ____   ____   ____     ____   ____" << endl;

	outputPosition(j, i + 13);
	cout << "|| 1|| || 2|| || 3||   || +|| || -||" << endl;

	outputPosition(j, i + 14);
	cout << "||__|| ||__|| ||__||   ||__|| ||__||" << endl;

	outputPosition(j, i + 15);
	cout << "|/__\\| |/__\\| |/__\\|   |/__\\| |/__\\|" << endl;

	outputPosition(j, i + 16);
	cout << " ____   ____   ____     ____   ____" << endl;

	outputPosition(j, i + 17);
	cout << "|| 0|| ||00|| || .||   ||MU|| || =||" << endl;

	outputPosition(j, i + 18);
	cout << "||__|| ||__|| ||__||   ||__|| ||__||" << endl;

	outputPosition(j, i + 19);
	cout << "|/__\\| |/__\\| |/__\\|   |/__\\| |/__\\|" << endl;
}

// Clears calculator's screen only
void clearGameScreen()
{
	int i = 6;
	int j = 7;

	outputPosition(i, j + 1);
	cout << "                               " << endl;

	outputPosition(i, j + 2);
	cout << "                               " << endl;

	outputPosition(i, j + 3);
	cout << "                               " << endl;

	outputPosition(i, j + 4);
	cout << "                               " << endl;

	outputPosition(i, j + 5);
	cout << "                               " << endl;

	outputPosition(i, j + 6);
	cout << "                               " << endl;

	outputPosition(i, j + 7);
	cout << "                               " << endl;

	outputPosition(i, j + 8);
	cout << "                               " << endl;

	outputPosition(i, j + 9);
	cout << "                               " << endl;

	outputPosition(i, j + 10);
	cout << "                               " << endl;

	outputPosition(i, j + 11);
	cout << "                               " << endl;

	outputPosition(i, j + 12);
	cout << "                               " << endl;
}


// Print bitwise "AND" truth table 
void logicAndTruthTable()
{
	clearGameScreen();

	outputPosition(9, 6);
	cout << "Bitwise AND & truth table";

	int i = 13;
	int j = 7;

	outputPosition(i, j + 1);
	cout << char(218) << char(196) << char(196) << char(196) << char(194);
	cout << char(196) << char(196) << char(196) << char(194) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(191) << endl;

	outputPosition(i, j + 2);
	cout << char(179) << " A " << char(179) << " B " << char(179) << " RESULT " << char(179) << endl;

	outputPosition(i, j + 3);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 4);
	cout << char(179) << " 0 " << char(179) << " 0 " << char(179) << "   0    " << char(179) << endl;

	outputPosition(i, j + 5);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 6);
	cout << char(179) << " 0 " << char(179) << " 1 " << char(179) << "   0    " << char(179) << endl;

	outputPosition(i, j + 7);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 8);
	cout << char(179) << " 1 " << char(179) << " 0 " << char(179) << "   0    " << char(179) << endl;

	outputPosition(i, j + 9);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 10);
	cout << char(179) << " 1 " << char(179) << " 1 " << char(179) << "   1    " << char(179) << endl;

	outputPosition(i, j + 11);
	cout << char(192) << char(196) << char(196) << char(196) << char(193);
	cout << char(196) << char(196) << char(196) << char(193) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(217) << endl;


	outputPosition(36, 12);
	cout << ">";
}

// Print bitwise "OR" truth table 
void logicOrTruthTable()
{
	clearGameScreen();

	outputPosition(9, 6);
	cout << " Bitwise OR | truth table";

	int i = 13;
	int j = 7;

	outputPosition(i, j + 1);
	cout << char(218) << char(196) << char(196) << char(196) << char(194);
	cout << char(196) << char(196) << char(196) << char(194) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(191) << endl;

	outputPosition(i, j + 2);
	cout << char(179) << " A " << char(179) << " B " << char(179) << " RESULT " << char(179) << endl;

	outputPosition(i, j + 3);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 4);
	cout << char(179) << " 0 " << char(179) << " 0 " << char(179) << "   0    " << char(179) << endl;

	outputPosition(i, j + 5);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 6);
	cout << char(179) << " 0 " << char(179) << " 1 " << char(179) << "   1    " << char(179) << endl;

	outputPosition(i, j + 7);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 8);
	cout << char(179) << " 1 " << char(179) << " 0 " << char(179) << "   1    " << char(179) << endl;

	outputPosition(i, j + 9);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 10);
	cout << char(179) << " 1 " << char(179) << " 1 " << char(179) << "   1    " << char(179) << endl;

	outputPosition(i, j + 11);
	cout << char(192) << char(196) << char(196) << char(196) << char(193);
	cout << char(196) << char(196) << char(196) << char(193) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(217) << endl;


	outputPosition(36, 12);
	cout << ">";
}

// Print bitwise "XOR" truth table 
void logicXorTruthTable()
{
	clearGameScreen();

	outputPosition(9, 6);
	cout << "Bitwise XOR ^ truth table";

	int i = 13;
	int j = 7;

	outputPosition(i, j + 1);
	cout << char(218) << char(196) << char(196) << char(196) << char(194);
	cout << char(196) << char(196) << char(196) << char(194) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(191) << endl;

	outputPosition(i, j + 2);
	cout << char(179) << " A " << char(179) << " B " << char(179) << " RESULT " << char(179) << endl;

	outputPosition(i, j + 3);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 4);
	cout << char(179) << " 0 " << char(179) << " 0 " << char(179) << "   0    " << char(179) << endl;

	outputPosition(i, j + 5);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 6);
	cout << char(179) << " 0 " << char(179) << " 1 " << char(179) << "   1    " << char(179) << endl;

	outputPosition(i, j + 7);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 8);
	cout << char(179) << " 1 " << char(179) << " 0 " << char(179) << "   1    " << char(179) << endl;

	outputPosition(i, j + 9);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 10);
	cout << char(179) << " 1 " << char(179) << " 1 " << char(179) << "   0    " << char(179) << endl;

	outputPosition(i, j + 11);
	cout << char(192) << char(196) << char(196) << char(196) << char(193);
	cout << char(196) << char(196) << char(196) << char(193) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(217) << endl;


	outputPosition(36, 12);
	cout << ">";
}

// Print bitwise "NOT" truth table 
void logicNotTruthTable()
{
	clearGameScreen();

	outputPosition(9, 6);
	cout << " Bitwise NOT ~ truth table";

	int i = 15;
	int j = 8;

	outputPosition(i, j + 1);
	cout << char(218) << char(196) << char(196) << char(196) << char(194);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(191) << endl;

	outputPosition(i, j + 2);
	cout << char(179) << " A " << char(179) << " RESULT " << char(179) << endl;

	outputPosition(i, j + 3);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 4);
	cout << char(179) << " 0 " << char(179) << "   1    " << char(179) << endl;

	outputPosition(i, j + 5);
	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(180) << endl;

	outputPosition(i, j + 6);
	cout << char(179) << " 1 " << char(179) << "   0    " << char(179) << endl;

	outputPosition(i, j + 7);
	cout << char(192) << char(196) << char(196) << char(196) << char(193);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(217) << endl;


	outputPosition(36, 12);
	cout << ">";
}