#include <iostream>
#include "DivideByZeroException.h"

using namespace std;

double quotient(int numerator, int denominator)
{
	if (denominator == 0)
	{
		throw DivideByZeroException();
	}
	return static_cast<double> (numerator) / denominator;
}

int main()
{
	int number1, number2;
	cout << "Enter two integer (end of file to end): ";

	while (cin >> number1 >> number2)
	{
		try
		{
			double result = quotient(number1, number2);
			cout << "THe quotient is: " << result << endl;
		}
		catch (DivideByZeroException &divideByZeroException)
		{
			cout << "Exception occured: "
				<< divideByZeroException.what() << endl;
		}

		cout << "\nEnter two integer ( end of line to end): ";
	}

	cout << endl;
}