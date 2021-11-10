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

}

//void Board::startingPositions()
//{
//	for (int i = 0; i < this->Y; i++)
//		for (int j = 0; j < this->X; j++)
//			this->tab[i][j] = rand() % 2;
//}
//
//void Board::startingPositions(int N)
//{
//	making every posision have value
//	for (int i = 0; i < this->Y; i++)
//		for (int j = 0; j < this->X; j++)
//			this->tab[i][j] = 0;
//	random posision of N atoms
//	int j = 0, x=0, y=0;
//	while (j < N)
//	{
//		x = rand() % this->X;
//		y = rand() % this->Y;
//		if (this->tab[y][x] == 0)
//		{
//			this->tab[y][x] = 1;
//			j++;
//		}
//	}
//}
//
int Board::value(int x, int y)
{
	return this->tab[y][x];
}

void Board::drawBoard()
{
	for (int y = 0; y < this->Y; y++)
	{
		for (int x = 0; x < this->X; x++)
			std::cout << this->tab[y][x] << " ";
		std::cout << std::endl;
	}
}
void Board::setOne(int x, int y)
{
	tab[y][x] = 1;
}
void Board::setZero(int x, int y)
{
	tab[y][x] = 0;
}
//
//void Board::moveObjects()
//{
//
//}

Board::~Board()
{
	/*for (int i = 0; i < this->Y; i++)
		delete[] this->tab[i];*/

	//delete[] * this->tab;
}
