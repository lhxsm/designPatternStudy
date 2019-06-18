// FactoryPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ShapeFactory.h"

int main()
{
	ShapeFactory *factory = new ShapeFactory();
	factory->getShape("circle")->draw();
	factory->getShape("rectangle")->draw();
	factory->getShape("square")->draw();

	system("pause");
    return 0;
}

