/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 3_2 - While loop
/////////////////////////////////////////////////////
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int loopSize = 0;

	while (loopSize != 100)
	{
		cout << loopSize << endl;
		loopSize++;
	}

	return 0;
}
