#include "Animal.h"

Animal::~Animal()
{
    std::cout << "Eläin tuhoutuu." << std::endl;
}

void Animal::callout() const {
    std::cout << "Eläin ääntelee." << std::endl;
}