#include "Particle.h"

Particle::Particle()
	:startingX(0), startingY(0), R(0)
{
	this->X = startingX;
	this->Y = startingY;
}
Particle::Particle(int x, int y)
	: startingX(x), startingY(y), R(0)
{
	this->X = startingX;
	this->Y = startingY;
}

double Particle::calculateR()
{
	this->R = sqrt((this->X - this->startingX) * (this->X - this->startingX)
		+ (this->Y - this->startingY) * (this->Y - this->startingY));
	return R;
}

int Particle::getX()
{
	return this->X;
}

int Particle::getY()
{
	return this->Y;
}

int Particle::getR()
{
	return this->Y;
}

void Particle::changePosition(int newX, int newY)
{
	this->X = newX;
	this->Y = newY;
}