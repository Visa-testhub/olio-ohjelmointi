#pragma once

#include <string>

class Car
{
private:
	std::string brand;
	std::string model;
	int			yearModel;
public:
	Car(std::string initBrand, std::string initModel, int initYearModel);
	void	printData() const;
};