// AbstractFactoryPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "FactoryProducer.h"

int main()
{
	FactoryProducer *fp = new FactoryProducer();

	AbstractFactory *colorFactory = fp->getFactory("color");
	colorFactory->getColor("red")->fillColor();

	colorFactory->getColor("blue")->fillColor();

	AbstractFactory *shapeFactory = fp->getFactory("shape");
	shapeFactory->getShape("square")->draw();
	

	system("pause");
    return 0;
}

