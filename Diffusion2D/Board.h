#pragma once

#include <memory>
#include <iostream>
#include <time.h>

class Board
{
public:
	Board();
	Board(int, int);
	~Board();

	//void startingPositions();
	//void startingPositions(int);
	void setOne(int, int);
	void setZero(int, int);
	void drawBoard();
	//void moveObjects();

private:
	int X, Y;
	//int** tab;
	std::unique_ptr < std::unique_ptr < int[] > [] > tab;
};

