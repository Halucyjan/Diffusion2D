#include "Controler.h"

Controler::Controler()
	:width(0), height(0), numberOfParticle(0)
{
	srand(time(NULL));
}

Controler::Controler(int w, int h, int n)
	: width(w), height(h), numberOfParticle(n)
{
	srand(time(NULL));
	if (this->checkBoardAndParticle())
	{
		this->setBoard();
		this->setParticles();
	}
	else
		printf("ERROR");
}

void Controler::setParticles()
{
	int x, y;
	particles = std::make_unique<Particle[]>(numberOfParticle); 
		//for (int i = 0; i < numberOfParticle; i++)
		int i = 0;
		while(i < numberOfParticle)
		{
			x = rand() % width;
			y = rand() % height;
			if (!board->value(x, y))
			{
				particles[i].startPosition(x, y);
				board->setOne(x, y);
				i++;
			}
		}

}

void Controler::setBoard()
{
	board = std::make_unique<Board>(width, height);
}

void Controler::Draw() 
{
	board->drawBoard();
}

bool Controler::checkBoardAndParticle() //if number of particle < size of board, return true
{
	if ((this->height * this->width) > this->numberOfParticle)
		return true;
	else
		return false;
}