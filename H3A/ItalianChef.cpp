#include "ItalianChef.h"

ItalianChef::ItalianChef(const std::string& name)
	: Chef(name)
{
	std::cout << "ItalianChef " << name << " constructor" << std::endl;
}

ItalianChef::~ItalianChef() {
	std::cout << "ItalianChef " << name << " destructor" << std::endl;
}

void ItalianChef::makePasta() {
	std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
}

std::string ItalianChef::getName() {
	return name;
}