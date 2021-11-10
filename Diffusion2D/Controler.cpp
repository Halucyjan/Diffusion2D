#include "Controler.h"

Controler::Controler()
	:width(0), height(0), numberOfParticle(0)
{

}

Controler::Controler(int w, int h, int n)
	: width(w), height(h), numberOfParticle(n)
{
	if (this->checkBoardAndParticle())
	{
		this->setBoard();
		this->setParticle();
	}
	else
		printf("ERROR");
}

void Controler::setParticle()
{
	particles = std::make_unique<Particle[]>(numberOfParticle);
}

void Controler::setBoard()
{
	board = std::make_unique<Board>(width, height);
}

bool Controler::checkBoardAndParticle() //if number of particle < size of board, return true
{
	if ((this->height * this->width) > this->numberOfParticle)
		return true;
	else
		return false;
}