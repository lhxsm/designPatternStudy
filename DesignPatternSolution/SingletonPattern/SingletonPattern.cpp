// SingletonPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "SingleObject.h"

int main()
{
	SingleObject::getInstance_2()->getInfo();
	SingleObject::getInstance_3()->getInfo();
	SingleObject::getInstance_1()->getInfo();
	system("pause");
    return 0;
}

