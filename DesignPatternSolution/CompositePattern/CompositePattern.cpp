// CompositePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Employee.h"

int main()
{
	Employee *CEO = new Employee("John", "CEO", 30000);

	Employee *headSales = new Employee("Robert", "Head sales", 20000);

	Employee *sales1 = new Employee("Richard", "Sales", 10000);

	CEO->add(headSales);
	headSales->add(sales1);

	cout << CEO->toString() << endl;
	for (Employee *e : CEO->getSubordinates())
	{
		cout << e->toString() << endl;
		for (Employee *ee : e->getSubordinates())
		{
			cout << ee->toString() << endl;
		}
	}

	system("pause");
    return 0;
}

