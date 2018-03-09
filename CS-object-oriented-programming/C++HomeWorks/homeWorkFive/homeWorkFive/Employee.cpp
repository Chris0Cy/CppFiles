#include "Employee.h"
#include <iostream>

using namespace std;


Employee::Employee()
{

}

Employee::Employee(string names)
{
	Point();
	name = names;
}
int Employee::GetCoordinates(Point & point)
{
	return getX();
	return getY();
}

void Employee::SetCoordinates(Point & point)
{
	int xValue;
	int yValue;
	cout << "enter a value for x then y:";
	cin >> xValue;
	cin >> yValue;
	setX(xValue);
	setY(yValue);
}

string Employee::GetName(string & name)
{
	return name;
}

void Employee::SetName(string & a)
{
	name = a;
}

Employee::~Employee()
{
}
