#pragma once

class Apartment
{
private:
	int	numOfTenants;
	int	area;

public:
	Apartment(int, int);
	int	heatingCost();
};

Apartment::Apartment(int initTenants, int initArea)
	:numOfTenants(initTenants), area(initArea)
{
}

int Apartment::heatingCost()
{
	return numOfTenants * area;
}