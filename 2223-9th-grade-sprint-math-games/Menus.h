#pragma once

#include <string>
using namespace std;

// Prints all game's levels numbers
void printGameLevels(int selectedLevel);

// Prints main menu options
void printMenuOptions(string menuOptions[], int selectedOption, string name);

// Main menu logic
void mainMenu(string menuOptions[], string name);