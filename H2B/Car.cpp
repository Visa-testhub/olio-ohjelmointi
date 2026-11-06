#include "Car.h"
#include <iostream>

Car::Car(std::string initBrand, std::string initModel, int initYearModel)
{
	brand = initBrand;
	model = initModel;
	yearModel = initYearModel;
}

void Car::printData() const
{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Model: " << model << std::endl;
	std::cout << "Year Model: " << yearModel << std::endl;
}