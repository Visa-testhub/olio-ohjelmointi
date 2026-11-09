#include "Dog.h"


int main() {
	{
		Animal animal;
		animal.callout();
	}//goes out of scope, should be destroyed.

	{
		Dog dog;
		dog.callout();
	}//

	return 0;
}