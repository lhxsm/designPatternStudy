#include "stdafx.h"
#include "Employee.h"

Employee::Employee(string name, string dept, int sal)
{
	m_name = name;
	m_dept = dept;
	m_salary = sal;
}

Employee::~Employee()
{
}

void Employee::add(Employee *e)
{
	subordinates.push_back(e);
}

void Employee::remove(Employee e)
{
	//subordinates.remove(e);
}

list<Employee*> Employee::getSubordinates()
{
	return subordinates;
}

std::string Employee::toString()
{
	string str = "Employee :[ name:" + m_name + ", dept: " + m_dept + ", salary: " + to_string(m_salary) + "]";
	return str;
}
