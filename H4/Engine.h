#pragma once
#include <string>

class Engine {
private:
	int horsepower;
	double displacement;

public:
	Engine();
	Engine(int engineHorsepower, double engineDisplacement);
	int getHorsepower();
	void setHorsepower(int newHorsepower);
	double getDisplacement();
	void setDisplacement(double newDisplacement);
};