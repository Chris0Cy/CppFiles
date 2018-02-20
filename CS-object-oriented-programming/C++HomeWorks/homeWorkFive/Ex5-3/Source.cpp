///////////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 5_2 – Default parameters
///////////////////////////////////////////////////////////

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Maximum
{
public:
	int GetMaximumValue(int num1, int num2, int num3)
	{
		int maxValue = num1;
		int num4 = 1000000;
		if (num2 > maxValue)
			maxValue = num2;
		if (num3 > maxValue)
			maxValue = num3;
		if (maxValue <= num4)
		{
			return maxValue;
		} 
		else
		{
			maxValue = num4;
			cout << "GetMaximumValue with 3 parameter just called" << endl;
			cout << "The max value is ";

			return maxValue;


		}

		
	}

	int GetMaximumValue(int num1, int num2, int num3,int num4)
	{
		int maxValue = num1;
		if (num2 > maxValue)
			maxValue = num2;
		if (num3 > maxValue)
			maxValue = num3;
		if (num4 > maxValue)
			maxValue = num4;

		cout << "GetMaximumValue with 4 parameter just called" << endl;
		cout << "The max value is ";

		return maxValue;
	}
};

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;

	Maximum max;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	cout << "Enter four number; ";
	cin >> num4;

	cout << "Max Value = " << max.GetMaximumValue(num1, num2, num3) << endl;
	cout << "Max Value = " << max.GetMaximumValue(num1, num2, num3,num4) << endl;

	int testCode;
	cin >> testCode;

	return 0;
}
