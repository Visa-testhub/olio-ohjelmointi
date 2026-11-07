#pragma once

#include <string>
#include <iostream>

class Chef {

protected:
	std::string name;

public:
	Chef(const std::string& name);
	virtual ~Chef();
	void makeSalad();
	void makeSoup();
};