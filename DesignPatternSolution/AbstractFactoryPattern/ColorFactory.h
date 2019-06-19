#pragma once
#include "AbstractFactory.h"
class ColorFactory :
	public AbstractFactory
{
public:
	ColorFactory();
	~ColorFactory();

	IShape *getShape(string shape);
	IColor *getColor(string color);
};

