#pragma once

#include <memory>
#include <iostream>


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
	int value(int, int);
	//void moveObjects();

private:
	int X, Y;
	std::unique_ptr < std::unique_ptr < int[] > [] > tab;
};

