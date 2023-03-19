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

void printLessonMessage()
{
	cout << " _    ___ ___ ___  ___  _  _" << endl;
	cout << "| |  | __/ __/ __|/ _ \\| \\| |" << endl;
	cout << "| |__| _|\\__ \\__ \\ (_) | .` |" << endl;
	cout << "|____|___|___/___/\\___/|_|\\_|" << endl;
}

void printTeamLogoMessage()
{

	cout << "__      __ _    _   _____  ___  ___ " << endl;
	cout << "\\ \\    / //_\\  | | |_   _|| __|| _ \\" << endl;
	cout << " \\ \\/\\/ // _ \\ | |__ | |  | _| |   /" << endl;
	cout << "  \\_/\\_//_/ \\_\\|____||_|  |___||_|_\\" << endl;
}

void printGameMessage()
{
	cout << "  ___    _    __  __  ___ " << endl;
	cout << " / __|  /_\\  |  \\/  || __|" << endl;
	cout << "| (_ | / _ \\ | |\\/| || _| " << endl;
	cout << " \\___|/_/ \\_\\|_|  |_||___|" << endl;
}

void printTestMessage()
{
	cout << " _____  ___  ___  _____ " << endl;
	cout << "|_   _|| __|/ __||_   _|" << endl;
	cout << "  | |  | _| \\__ \\  | |  " << endl;
	cout << "  |_|  |___||___/  |_|  " << endl;
}

void printCongratulationsMessage()
{
	cout << "  ___  ___   _  _   ___  ___    _  _____  ___  " << endl;
	cout << " / __|/ _ \\ | \\| | / __|| _ \\  /_\\|_   _|/ __| " << endl;
	cout << "| (__| (_) || .` || (_ ||   / / _ \\ | |  \\__ \\" << endl;
	cout << " \\___|\\___/ |_|\\_| \\___||_|_\\/_/ \\_\\|_|  |___/ " << endl;
	cout << "   __   __ ___   _   _      ___  ___  ___      " << endl;
	cout << "   \\ \\ / // _ \\ | | | |    |   \\|_ _||   \\     " << endl;
	cout << "    \\ V /| (_) || |_| |    | |) || | | |) |    " << endl;
	cout << "     |_|  \\___/  \\___/     |___/|___||___/     " << endl;
	cout << "                  ___  _____                   " << endl;
	cout << "                 |_ _||_   _|                  " << endl;
	cout << "                  | |   | |                    " << endl;
	cout << "                 |___|  |_|                    " << endl;
}

void printTryAgainMessage()
{
	cout << " _____  ___ __   __    _    ___    _    ___  _  _ " << endl;
	cout << "|_   _|| _ \\\\ \\\ / /   /_\\  / __|  /_\\  |_ _|| \\| |" << endl;
	cout << "  | |  |   / \\ V /   / _ \\| (_ | / _ \\  | | | .` |" << endl;
	cout << "  |_|  |_|_\\  |_|   /_/ \\_\\\\___|/_/ \\_\\|___||_|\\_|" << endl;
}

// Print bitwise "AND" truth table 
void logicAndTruthTable()
{
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

// Print bitwise "OR" truth table 
void logicOrTruthTable()
{
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

	cout << char(179) << " 0 " << char(179) << " 1 " << char(179) << "   1    " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 1 " << char(179) << " 0 " << char(179) << "   1    " << char(179) << endl;

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

// Print bitwise "XOR" truth table 
void logicXorTruthTable()
{
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

	cout << char(179) << " 0 " << char(179) << " 1 " << char(179) << "   1    " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 1 " << char(179) << " 0 " << char(179) << "   1    " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(197) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 1 " << char(179) << " 1 " << char(179) << "   0    " << char(179) << endl;

	cout << char(192) << char(196) << char(196) << char(196) << char(193);
	cout << char(196) << char(196) << char(196) << char(193) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(217) << endl;
}

// Print bitwise "NOT" truth table 
void logicNotTruthTable()
{
	cout << char(218) << char(196) << char(196) << char(196) << char(194);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(191) << endl;

	cout << char(179) << " A " << char(179) << " RESULT " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 0 " << char(179) << "   1    " << char(179) << endl;

	cout << char(195) << char(196) << char(196) << char(196) << char(197);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(180) << endl;

	cout << char(179) << " 1 " << char(179) << "   0    " << char(179) << endl;

	cout << char(192) << char(196) << char(196) << char(196) << char(193);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(217) << endl;
}

void logicAndExamples()
{
	cout << "A = 10 = 1 0 1 0 (Binary)" << endl;
	cout << "B = 11 = 1 0 1 1 (Binary)" << endl;

	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	cout << "A  & B = 1 0 1 0 (Decimal)" << endl;

	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;
}

void firstLevelTest(bool exitStatement)
{
	string answer;
	char pressedKey = ' ';

	cout << "A = 10 = 1 0 1 0 (Binary)" << endl;
	cout << "B =  7 = 0 1 1 1 (Binary)" << endl;

	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	cout << "A  & B = " << endl;

	cout << "         " << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << char(196) << char(196);
	cout << char(196) << char(196) << char(196) << endl;

	while (exitStatement)
	{
		outputPosition(9, 3);
		cout << "           ";

		outputPosition(9, 3);
		getline(cin, answer);

		if (answer == "0010" || answer == "10" || answer == "    1 0" || answer == "0 0 1 0")
		{
			system("CLS");
			printCongratulationsMessage();

			exitStatement = false;

			cout << "Press any key to exit";
			pressedKey = _getch();
		}
	}
}

void firstLevel()
{
	// Game level
	cout << "Bitwise AND &" << endl;

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
			system("CLS");
			selectedPage--;
			outputPosition(0, 0);
			logicAndTruthTable();
		}

		// Moving down through the levels
		if (selectedPage != 1 && pressedKey == (char)77)
		{
			system("CLS");
			selectedPage++;
			outputPosition(0, 0);
			logicAndExamples();
		}

	}
	system("CLS");
	firstLevelTest(exitStatement);
}

void secondLevel()
{
	// Game level
	cout << "Bitwise OR |" << endl;

	logicOrTruthTable();
}

void thirdLevel()
{
	// Game level
	cout << "Bitwise XOR ^" << endl;

	logicXorTruthTable();
}

void fourthLevel()
{
	// Game level
	cout << "Bitwise NOT ~" << endl;

	logicNotTruthTable();
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
				fourthLevel();
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

	// String array with all the main menu options
	string mainMenuOptions[] = { "Start", "Rules", "Exit" };

	mainMenu(mainMenuOptions);
}