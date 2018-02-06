/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 3_4 - For loops
/////////////////////////////////////////////////////
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	for (int x = 1; x <= 64; x++)
	{
		cout << "* ";
			if ((x % 8 == 0) || (x % 16 == 0))
			{
				cout << endl;
			}

			if ((x % 8 == 0) && (x % 16 == 0))
			{
				cout << " ";
			}

	}

	int ttest;
	cin >> ttest;

	return 0;
}
