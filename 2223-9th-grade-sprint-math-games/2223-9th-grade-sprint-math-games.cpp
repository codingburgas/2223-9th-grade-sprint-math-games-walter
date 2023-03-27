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

void fourthLevel()
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

void game()
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
				fourthLevel();
				break;

				// Fifth level
			case 4:
				clearGameScreen();
				fifthLevel();
				break;

				// Sixth level
			case 5:
				clearGameScreen();
				sixthLevel();
				break;

				// Seventh level
			case 6:
				clearGameScreen();
				seventhLevel();
				break;

				// Eigth level
			case 7:
				clearGameScreen();
				eighthLevel();
				break;

				// Nineth level
			case 8:
				clearGameScreen();
				ninethLevel();
				break;

				// Tenth level
			case 9:
				clearGameScreen();
				tenthLevel();
				break;

			default:
				break;
			}
		}
	}
}

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

void mainMenu(string menuOptions[], string name)
{
	// By default when you open the game you are hovering the first option
	int selectedOption = 0;
	char pressedKey = ' ';
	bool exitStatement = true;

	printGameBoard();
	printKeyboard();

	printMenuOptions(menuOptions, selectedOption, name);

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

		printMenuOptions(menuOptions, selectedOption, name);

		// Choosing menu option
		if (pressedKey == '\r')
		{
			switch (selectedOption)
			{
				// Start game
			case 0:
				clearGameScreen();
				game();
				break;

				// Rules
			case 1:
				clearGameScreen();
				cout << "Rules";
				break;

				// Exit
			case 2:
				exitStatement = false;
				clearGameScreen();
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