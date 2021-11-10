#pragma once

#include <memory>
#include <iostream>
#include <time.h>
#include "Board.h"
#include "Particle.h"

class Controler
{
public:
	Controler();
	Controler(int, int, int);
	void setParticles();
	void setBoard();
	bool checkBoardAndParticle();
	void Draw();
private:
	int width, height, numberOfParticle;
	std::unique_ptr <Board> board;
	std::unique_ptr <Particle[]> particles;
};

	