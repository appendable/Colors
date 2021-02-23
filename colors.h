#pragma once
#include <iostream>

namespace Colors {
	enum colors
	{
		DARKBLUE = 1,
		DARKGREEN = 2,
		LIGHTBLUE = 3,
		DARKRED = 4,
		PURPLE = 5,
		YELLOW = 6,
		GREY = 7,
		TRAILBYTE = 8,
		REVERSED = 9	
};

	void print(std::string content, int color);

	void example();

	void fullRGB(std::string content);

	void hideCursor();
};
