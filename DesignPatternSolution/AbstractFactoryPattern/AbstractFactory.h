#pragma once
#include "stdafx.h"

class AbstractFactory
{
public:
	virtual IColor *getColor(string color) = 0;
	virtual IShape *getShape(string shape) = 0;
};