#include <iostream>

using namespace std;

class SimpleMath
{
public:
	SimpleMath(int userInputOne, int userInputTwo)
	{
		numberOne = userInputOne;
		numberTwo = userInputTwo;
	};
	// simple Add method
	int Add()
	{
		return numberOne + numberTwo;
	}
	int Multiply()
	{
		return numberOne * numberTwo;
	};
private:
	int numberOne;
	int numberTwo;
};


int main()
{
	int number1 = 5;
	int number2 = 10;

	// declare an object of type SimpleMath
	SimpleMath simpleMath(number1, number2);
	int result = 0;

	// perform our operation using the simpleMath object, then display result
	result = simpleMath.Add();
	cout << number1 << " + " << number2 << " = " << result << endl;

	result = simpleMath.Multiply();
	cout << number1 << " x " << number2 << " = " << result << endl;

	return 0;
}
