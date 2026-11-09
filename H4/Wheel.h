#pragma once
#include <string>

class Wheel {
private:
	int size;
	std::string type;
public:
	Wheel();
	Wheel(int wheelSize, std::string wheelType);
	int getSize();
	void setSize(int wheelSize);
	std::string getType();
	void setType(std::string newType);
};