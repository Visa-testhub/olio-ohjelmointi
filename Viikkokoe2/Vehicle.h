#pragma once
#include <string>

class Vehicle
{
private:
	int			speed;
	std::string	name;

public:
	int getSpeed();
	void setSpeed(int);
	std::string getName();
	void setName(std::string);
};

int Vehicle::getSpeed()
{
	return speed;
}

void Vehicle::setSpeed(int newSpeed)
{
	speed = newSpeed;
}

std::string Vehicle::getName()
{
	return name;
}

void Vehicle::setName(std::string newName)
{
	name = newName;
}