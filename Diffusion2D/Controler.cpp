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

}

void Controler::setBoard()
{

}

bool Controler::checkBoardAndParticle()
{
	if ((this->height * this->width) > this->numberOfParticle)
		return true;
	else
		return false;
}