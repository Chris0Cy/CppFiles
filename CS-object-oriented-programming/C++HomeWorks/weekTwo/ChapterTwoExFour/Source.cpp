// include library that may be needed
#include <iostream>
#include "SimpleMath.h"

// namcespace std
using namespace std;

// program main
int main()
{
	//data decleartion 
	int numberOne;
	int numberTwo;

	//data initlization 
	numberOne = 0;
	numberTwo = 0;

	//request user input
	cout << "Please enter a value for numberOne =";
	cin >> numberOne;
	cout << "Please enter a value for numberTwo =";
	cin >> numberTwo;

	//Object creation
	SimpleMath testObject(numberOne, numberTwo);

	//output to screen
	cout << "Add function value is: " << testObject.Add() << endl;
	cout << "Mult function value is: " << testObject.Mult() << endl;

};