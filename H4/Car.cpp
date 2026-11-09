#include "Car.h"
#include <iostream>

Car::Car() : model(""), brand("") {}

Car::Car(std::string carModel, std::string carBrand) : model(carModel), brand(carBrand) {}

void Car::setEngine() {
	objEngine = Engine(150, 2.0);
}

void Car::setWheels() {
	objWheel1 = Wheel(17, "kesarengas");
	objWheel2 = Wheel(17, "kesarengas");
	objWheel3 = Wheel(17, "kesarengas");
	objWheel4 = Wheel(17, "kesarengas");
}

std::string Car::getModel() {
	return model;
}

void Car::setModel(std::string newModel) {
	model = newModel;
}

std::string Car::getBrand() {
	return brand;
}

void Car::setBrand(std::string newBrand) {
	brand = newBrand;
}

void Car::printDetails() {
	std::cout << "Auto:" << model << " " << brand << std::endl;
	std::cout << "Moottori: " << objEngine.getHorsepower() << ", " << objEngine.getDisplacement() << std::endl;
	std::cout << "Rengas 1:" << objWheel1.getSize() << " " << objWheel1.getType() << std::endl;
	std::cout << "Rengas 2:" << objWheel2.getSize() << " " << objWheel2.getType() << std::endl;
	std::cout << "Rengas 3:" << objWheel3.getSize() << " " << objWheel3.getType() << std::endl;
	std::cout << "Rengas 4:" << objWheel4.getSize() << " " << objWheel4.getType() << std::endl;
}