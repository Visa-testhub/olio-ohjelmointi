#pragma once
#include <string>
#include <iostream>

class Animal
{
public:
	virtual ~Animal();
    virtual void callout() const;
};