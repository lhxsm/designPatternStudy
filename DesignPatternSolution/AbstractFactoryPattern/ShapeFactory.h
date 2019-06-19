#pragma once
#include "AbstractFactory.h"

class ShapeFactory : public AbstractFactory
{
public:
	ShapeFactory();
	~ShapeFactory();

	IColor *getColor(string color);
	IShape *getShape(string shape);
};

