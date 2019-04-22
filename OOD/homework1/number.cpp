#include "number.h"
#include <iostream>

using namespace std;

number::number()
{
}

void number::operator()()
{
	throw string("nothing is here");
}

void number::operator()(int inputOne, int inputTwo)
{
	if (inputOne == 0) {
		throw string("first input zero");
	}
	if (inputTwo == 0) {
		throw string("second input zero");
	}

	cout << "the value input for inputOne is:" << inputOne << endl;
	cout << "the value input for inputTwo is:" << inputTwo << endl;
	int results = inputOne / inputTwo;
	cout << "the value for results is:" << results << endl;
}

number::~number()
{
}
