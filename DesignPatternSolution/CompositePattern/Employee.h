#pragma once
#include "stdafx.h"

class Employee
{
public:
	Employee(string name, string dept, int sal);
	~Employee();

	void add(Employee *e);
	void remove(Employee e);
	list<Employee*> getSubordinates();

	string toString();

private:
	string m_name;
	string m_dept;
	int    m_salary;

	list<Employee*> subordinates;
};

