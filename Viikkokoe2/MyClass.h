#pragma once

#include <string>

class myClass
{
private:
	int number1;
	int number2;

protected:
	void setNumber1(int);
	void setNumber2(int);

public:
	int result;

	myClass();
	int	calculateResult();
};