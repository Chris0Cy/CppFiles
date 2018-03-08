#include "Point.h"



Point::Point()
{
	x = 0;
	y = 0;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::setX(int a)
{
	x = a;
}

void Point::setY(int a)
{
	y = a;
}
Point::~Point()
{
}
