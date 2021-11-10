#pragma once

#include <memory>
#include <iostream>
#include "Board.h"
#include "Particle.h"

class Controler
{
public:
	Controler();
	Controler(int, int, int);
	void setParticle();
	void setBoard();
	bool checkBoardAndParticle();
private:
	int width, height, numberOfParticle;
	std::unique_ptr <Board> board;
	std::unique_ptr <Particle[]> particles;
};

	