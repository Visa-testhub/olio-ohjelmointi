#include "Dog.h"

Dog::~Dog()
{
    std::cout << "Koira tuhoutuu." << std::endl;
}

void Dog::callout() const {
    std::cout << "Koira haukkuu." << std::endl;
}