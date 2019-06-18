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

IShape* ShapeFactory::getShape(string shapeType)
{
	if (shapeType.empty())
	{
		return NULL;
	}
	if (shapeType.compare("circle") == 0)
	{
		return new Circle;
	}
	else if (shapeType.compare("rectangle") == 0)
	{
		return new Rectangel;
	}
	else
	{
		return new Square;
	}
	return NULL;
}
