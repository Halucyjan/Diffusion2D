#pragma once

#include <cmath>

class Particle
{
public:
	Particle();
	Particle(int, int);
	double calculateR();
	int getX();
	int getY();
	int getR();
	void changePosition(int, int);
private:
	int startingX, startingY, X, Y;
	double R;
};

