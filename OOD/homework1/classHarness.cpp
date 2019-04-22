#include "classHarness.h"
#include <string>
#include <iostream>

using namespace std;


classHarness::classHarness()
{
}

void classHarness::testFunction()
{
	int inputOne = 0;
	int inputTwo = 0;

	cout << "Enter value for inputOne:";
	cin >> inputOne;
	cout << "Enter value for inputTwo:";
	cin >> inputTwo;
	
	number test;
	try
	{
		test(inputOne, inputTwo);
		test(inputOne, 0);
		test();
	}
	catch (string x)
	{
		cout << x << endl;
	}
}

classHarness::~classHarness()
{
}
