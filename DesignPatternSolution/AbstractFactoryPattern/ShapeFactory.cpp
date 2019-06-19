#include "stdafx.h"
#include "ShapeFactory.h"
#include "Circle.h"
#include "Rectangel.h"
#include "Square.h"

ShapeFactory::ShapeFactory()
{
}


ShapeFactory::~ShapeFactory()
{
}

IColor * ShapeFactory::getColor(string color)
{
	return NULL;
}

IShape* ShapeFactory::getShape(string shape)
{
	if (shape.empty())
	{
		return NULL;
	}
	if (shape.compare("circle") == 0)
	{
		return new Circle;
	}
	else if (shape.compare("rectangle") == 0)
	{
		return new Rectangel;
	}
	else
	{
		return new Square;
	}
	return NULL;
}
