#pragma once

#include <memory>
#include <iostream>

class Board
{
public:
	Board();
	Board(int, int);
	~Board();
private:
	int X, Y;
	//int** tab;
	std::unique_ptr < std::unique_ptr < int[] > [] > tab;
};

