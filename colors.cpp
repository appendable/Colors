#include "colors.h"
#include <Windows.h>
#include <wincon.h>


void Colors::print(std::string content, int color)
{
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	switch (color)
	{
	case DARKBLUE:
		SetConsoleTextAttribute(console, 1);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	case DARKGREEN:
		SetConsoleTextAttribute(console, 2);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	case DARKRED:
		SetConsoleTextAttribute(console, 4);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	case PURPLE:
		SetConsoleTextAttribute(console, 5);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	case YELLOW:
		SetConsoleTextAttribute(console, 6);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	case LIGHTBLUE:
		SetConsoleTextAttribute(console, 3);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	case GREY:
		SetConsoleTextAttribute(console, FOREGROUND_INTENSITY);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	case TRAILBYTE:
		SetConsoleTextAttribute(console, COMMON_LVB_TRAILING_BYTE);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	case REVERSED:
		SetConsoleTextAttribute(console, COMMON_LVB_REVERSE_VIDEO);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(console, 7);
		break;
	default:
		std::cout << content << std::endl;
		break;
	}
}

void Colors::example()
{
	Colors::print("Dark Blue", DARKBLUE);
	Colors::print("Dark Green", DARKGREEN);
	Colors::print("Dark Red", DARKRED);
	Colors::print("Purple", PURPLE);
	Colors::print("Yellow", YELLOW);
	Colors::print("Light Blue", LIGHTBLUE);
	Colors::print("Grey", GREY);
	Colors::print("Trailbyte", TRAILBYTE);
	Colors::print("Reversed", REVERSED);
}

void Colors::fullRGB(std::string content)
{
	for (int i = 0; i < 255; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
		std::cout << content << std::endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
}

void Colors::hideCursor()
{
	ShowScrollBar(GetConsoleWindow(), NULL, false);
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 100;
	SetConsoleCursorInfo(console, &info);
}

