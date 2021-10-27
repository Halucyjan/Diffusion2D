#pragma once

#include <iostream>

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
};

	