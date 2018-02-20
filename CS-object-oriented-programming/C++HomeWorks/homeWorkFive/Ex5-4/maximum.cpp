#include "maximum.h"
#include <iostream>

using namespace std;

int main()
{
	int intOne,intTwo,intThree,intFour;
	double double1, double2, double3, double4;
	char char1, char2, char3, char4;

	cout << "Input three integer value: ";
	cin >> intOne, intTwo, intThree, intFour;

	cout << "The maximum integer value is: " << maximum(intOne, intTwo, intThree,intFour);


	cout << "\n\nInput Three double values: ";
	cin >> double1, double2, double3, double4;
	
	cout << "The maximum double value is: " << maximum(double1, double2, double3,double4);

	cout << "\n\nINput three character: ";
	cin >> char1, char2, char3, char4;

	cout << "THe maximum character value is: " << maximum(char1, char2, char3,char4) << endl;

}
