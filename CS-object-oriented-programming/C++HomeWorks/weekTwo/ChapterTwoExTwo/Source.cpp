///////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 2_1 - Simple Class
///////////////////////////////////////////////
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class SimpleMath
{
public:
	// simple Add method
	int Add(int number1, int number2)
	{
		result = number1 + number2;
		return result;
	};
	int muti(int numberOne, int numberTwo)
	{
		result = numberOne * numberTwo;
		return result;
	};
private:
	int result;
};

int main()
{
	// declare an object of type SimpleMath
	SimpleMath simpleMath;

	// declare some variables to work with
	int number1 = 0;
	int number2 = 0;
	int resultAdd = 0;
	int resultMuti = 0;

	// prompt user for input
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;

	// perform our operation using the simpleMath object, then display result
	resultAdd = simpleMath.Add(number1, number2);
	cout << "the number you just added the result is = " << resultAdd << endl;
	resultMuti = simpleMath.muti(number1, number2);
	cout << "the number you just muti the result is = " << resultMuti << endl;

	return 0;
}
