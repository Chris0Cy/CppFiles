///////////////////////////////////////////////////////////
// loc.h
// CIS554 Object Oriented Programming in C++
// Exercise 8_1 - Operator Overloading - member functions
//                Class loc interface
///////////////////////////////////////////////////////////
#ifndef __LOC_H__
#define __LOC_H__

#include <iostream>
using std::cout;

class loc
{

public:
	loc(int lon = 0, int lat = 0);
	void show();
	loc &operator+(loc &op2);

	int longitude, latitude;
};

loc operator+=(int, loc&);
#endif __LOC_H__

