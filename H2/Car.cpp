#include "car.h"
#include <iostream>

void Car::printData() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << yearModel << std::endl;
}

void Car::setBrand(std::string brand)
{
    this->brand = brand;
}

void Car::setModel(std::string model)
{
    this->model = model;
}

void Car::setYearModel(int year)
{
    yearModel = year;
}