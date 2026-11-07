#pragma once

#include <string>
#include "Chef.h"

class ItalianChef : public Chef
{
public:
	ItalianChef(const std::string& name);
	~ItalianChef();
	void makePasta();
	std::string getName();
};