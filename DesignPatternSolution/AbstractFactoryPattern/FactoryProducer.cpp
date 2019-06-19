#include "stdafx.h"
#include "FactoryProducer.h"
#include "ColorFactory.h"
#include "ShapeFactory.h"

FactoryProducer::FactoryProducer()
{
}


FactoryProducer::~FactoryProducer()
{
}

AbstractFactory * FactoryProducer::getFactory(string choice)
{
	if (choice.compare("color") == 0)
		return new ColorFactory;
	else
		return new ShapeFactory;
}
