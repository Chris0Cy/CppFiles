#pragma once
#include "Point.h"
#include <string>

using namespace std;

class Employee :
	public Point
{
public:
	Employee();
	Employee(string);
	int GetCoordinates(Point & point);
	void SetCoordinates(Point & point);
	string GetName(string & name);
	void SetName(string & name);

	~Employee();
private:
	string name;
};

