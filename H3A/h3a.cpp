#include "ItalianChef.h"

int main() {
	
	{
		auto chef = Chef("Gordon Ramsay");
		chef.makeSalad();
		chef.makeSoup();
	}

	{
		auto italianChef = ItalianChef("Anthony Bourdain");
		italianChef.makeSalad();
		italianChef.makeSoup();
		italianChef.makePasta();
		std::cout << "name of the Italian Chef is " << italianChef.getName() << std::endl;
	}

	return 0;
}