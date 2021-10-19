#include "Board.h"

Board::Board()
{
	this->X = 0;
	this->Y = 0;
}

Board::Board(int x, int y)
	:X(x), Y(y)
{
	this->tab = std::make_unique<std::unique_ptr < int[] >[]> (Y);

	for (int i = 0; i < this->Y; i++)
		this->tab[i] = std::make_unique<int[] >(X);

	for (int i = 0; i < this->Y; i++)
		for (int j = 0; j < this->X; j++)
			this->tab[i][j] = 1;

	for (int i = 0; i < this->Y; i++)
	{
		for (int j = 0; j < this->X; j++)
			std::cout << this->tab[i][j] << " ";
		std::cout << std::endl;
	}
}

Board::~Board()
{
	/*for (int i = 0; i < this->Y; i++)
		delete[] this->tab[i];*/

	//delete[] * this->tab;
}
