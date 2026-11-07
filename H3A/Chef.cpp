#include "Chef.h"

Chef::Chef(const std::string& name)
	: name(name)
{
	std::cout << "Chef " << name << " constructor" << std::endl;
}

Chef::~Chef() {
	std::cout << "Chef " << name << " destructor" << std::endl;
}

void Chef::makeSalad() {
	std::cout << "Chef " << name << " makes a salad" << std::endl;
}

void Chef::makeSoup() {
	std::cout << "Chef " << name << " makes a soup" << std::endl;
}