#include "Wheel.h"

Wheel::Wheel() : size(0), type("") {}

Wheel::Wheel(int wheelSize, std::string wheelType) : size(wheelSize), type(wheelType) {}

int Wheel::getSize() {
	return size;
}

void Wheel::setSize(int wheelSize) {
	size = wheelSize;
}

std::string Wheel::getType() {
	return type;
}

void Wheel::setType(std::string newType) {
	type = newType;
}