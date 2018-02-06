#include "Circle.h"
#include <iostream>
#include <math.h>

using namespace std;

Circle::Circle()
{
	pi = 3.14159;
	radius = 0;
}

void Circle::getDiameter() 
{
	cout << "Your Diameter is: " << (2 * radius) << endl;
}

void Circle::getCircumference()
{
	cout << "Your Circumference is: " << (2 * radius * pi) << endl;
}

void Circle::getArea()
{
	cout << "Your area is: " << (pi * pow(radius, 2)) << endl;
}


void Circle::engine()
{
	bool keepGoing = true;

	while (keepGoing)
	{
		double tempValue;
		cout << "Please enter a value for Radius: " << endl;
		cin >> tempValue;
		if (tempValue > 0)
		{
			radius = tempValue;
			getDiameter();
			getArea();
			getCircumference();
		} 
		else
		{
			keepGoing = false;
		}
	} 

	cout << "Program Ended " << endl;

}

Circle::~Circle()
{
}
