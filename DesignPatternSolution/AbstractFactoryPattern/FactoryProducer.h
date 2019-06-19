#pragma once
#include "AbstractFactory.h"

class FactoryProducer
{
public:
	FactoryProducer();
	~FactoryProducer();

	AbstractFactory *getFactory(string choice);
};

