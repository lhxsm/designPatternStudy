#include "stdafx.h"
#include "ColorFactory.h"
#include "RedColor.h"
#include "BlueColor.h"

ColorFactory::ColorFactory()
{
}


ColorFactory::~ColorFactory()
{
}

IShape * ColorFactory::getShape(string shape)
{
	return NULL;
}

IColor * ColorFactory::getColor(string color)
{
	if (color.compare("red") == 0)
	{
		return new RedColor;
	}
	else if (color.compare("blue") == 0)
	{
		return new BlueColor;
	}
}
