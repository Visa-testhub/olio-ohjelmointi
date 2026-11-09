#include "Car.h"

int main() {
	Car myCar("Corolla", "Toyota");
	myCar.setEngine();
	myCar.setWheels();
	myCar.printDetails();
	return 0;
}