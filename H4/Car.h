#pragma once
#include <string>
#include "Wheel.h"
#include "Engine.h"

class Car {
private:
	Engine objEngine;
	Wheel objWheel1;
	Wheel objWheel2;
	Wheel objWheel3;
	Wheel objWheel4;
	std::string model;
	std::string brand;
public:
	Car();
	Car(std::string carModel, std::string carBrand);
	void setEngine();
	void setWheels();
	std::string getModel();
	void setModel(std::string newModel);
	std::string getBrand();
	void setBrand(std::string newBrand);
	void printDetails();
};