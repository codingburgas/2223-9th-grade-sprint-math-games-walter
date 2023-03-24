#include "functions.h"
#include "raylib.h"
#include <iostream>
#include <vector>

using namespace std;

void mainMenu(bool* game, bool* isClosed)
{
	SetWindowTitle("Bitsain Menu");
	int temp = 0;


	Color colorState = BEIGE;

	Color colors[] = {
		YELLOW
	};

	//button
	vector<Rectangle> buttons;

	//Set a position of the button

	for (int i = 0; i < 1; i++)
	{
		Rectangle button;
		button.width = 245;
		button.height = 75;
		button.x = 375;
		button.y = 150 + 70 * i;

		buttons.push_back(button);
		temp = i;
	}





	while (!*isClosed)
	{
		if (WindowShouldClose())
		{
			*isClosed = true;
		}

		//checking clolusion mouse with the button
		for (int i = 0; i < 1; i++)
		{

			if (CheckCollisionPointRec(GetMousePosition(), buttons[i]) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{
				*game = true;
				colorState = colors[i];
				return;
			}
		}



		BeginDrawing();

		ClearBackground(WHITE);

		for (int i = 0; i < 1; i++)
		{

			DrawRectangleRec(buttons[i], colors[i]);

			if (CheckCollisionPointRec(GetMousePosition(), buttons[i]))
			{
				DrawRectangleLinesEx(buttons[i], 4, Fade(WHITE, 0.6));
			}
			DrawRectangleRec(buttons[i], colors[i]);
		}
		DrawText("Play", 455, 150 + 70 * temp + 25, 40, DARKBLUE);

		EndDrawing();
	}


}


#define MAX_INPUT_CHARS 2
const int textBoxX = 100;
const int textBoxY = 140;

void mainGame(bool* isClosed)
{
	SetWindowTitle("Bitsain Game");

	char name[MAX_INPUT_CHARS + 1] = "\0";
	int leterCounter = 0;


	Rectangle textBox = { textBoxX, textBoxY, 100, 50 };
	bool mouseOnText = false;

	int framesCounter = 0;

	while (!*isClosed)
	{

		if (WindowShouldClose())
		{
			*isClosed = true;
		}

		if (CheckCollisionPointRec(GetMousePosition(), textBox))
			mouseOnText = true;

		else
			mouseOnText = false;

		if (mouseOnText)
		{
			SetMouseCursor(MOUSE_CURSOR_IBEAM);

			int key = GetCharPressed();

			while (key > 0)
			{
				if ((key >= 32) && (key <= 125) && (leterCounter < MAX_INPUT_CHARS))
				{
					name[leterCounter] = (char)key;
					name[leterCounter + 1] = '\0';
					leterCounter++;
				}

				key = GetCharPressed();
			}
			if (IsKeyPressed(KEY_BACKSPACE))
			{
				leterCounter--;
				if (leterCounter < 0)
					leterCounter = 0;
				name[leterCounter] = '\0';

			}
		}

		else
		{
			SetMouseCursor(MOUSE_CURSOR_DEFAULT);

		}


		if (mouseOnText)
			framesCounter++;
		else
			framesCounter = 0;

		BeginDrawing();
		ClearBackground(BEIGE);

		DrawText("Place your mouse to the text box to input number!", 120, 50, 30, BLUE);

		DrawRectangleRec(textBox, YELLOW);

		if (mouseOnText)
			DrawRectangleLines((int)textBox.x, (int)textBox.y, (int)textBox.width, (int)textBox.height, RED);
		else
			DrawRectangleLines((int)textBox.x, (int)textBox.y, (int)textBox.width, (int)textBox.height, WHITE);

		DrawText(name, (int)textBox.x + 5, (int)textBox.y + 8, 40, MAROON);


		if (mouseOnText)
		{
			if (leterCounter < MAX_INPUT_CHARS)
			{
				if (((framesCounter / 20) % 2) == 0)
					DrawText("_", (int)textBox.x + 8 + MeasureText(name, 40), (int)textBox.y + 12, 40, RED);

			}
			else
				DrawText("Delete chars", 230, 300, 20, RED);
		}


		EndDrawing();
	}

}

bool IsAnyKeyPressed()
{
	bool keyPressed = false;
	int key = GetKeyPressed();

	if ((key >= 32) && (key <= 126)) keyPressed = true;

	return keyPressed;
}