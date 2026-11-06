#include "Car.h"
#include <vector>
#include <iostream>

int main()
{
	std::vector<Car>	cars = {Car("ToyYoda", "Corona", 2020), Car("Hajosiko", "Tojotasi", 2019), Car("VaikkapaVolvo", "VaikkapaV70", 2021)};

	cars[1].printData();

	std::cout << std::endl;

	for (const auto& c : cars)
	{
		c.printData();
	}

	return 0;
}