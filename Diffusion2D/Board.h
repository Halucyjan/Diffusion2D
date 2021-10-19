#pragma once
class Board
{
public:
	Board();
	Board(int, int);
	~Board();
private:
	int X, Y;
	int** tab;

};

