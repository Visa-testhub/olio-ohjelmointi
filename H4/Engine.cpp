#include "Engine.h"

Engine::Engine() : horsepower(0), displacement(0.0) {}

Engine::Engine(int engineHorsepower, double engineDisplacement) : horsepower(engineHorsepower), displacement(engineDisplacement) {}

int Engine::getHorsepower() {
	return horsepower;
}

void Engine::setHorsepower(int newHorsepower) {
	horsepower = newHorsepower;
}

double Engine::getDisplacement() {
	return displacement;
}

void Engine::setDisplacement(double newDisplacement) {
	displacement = newDisplacement;
}