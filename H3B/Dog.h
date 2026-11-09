#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	~Dog() override;
	void callout() const override;
};