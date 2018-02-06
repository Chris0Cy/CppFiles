#include <iostream>
#include "Convert.h"

using namespace std;

int main()
{
	int userInputNumbers;
	int userInputBase;
	cout << "please enter 6 digit value then press enter:";
	cout << "\n This program ONLY accepts 6 numbers of code:";
	cin >> userInputNumbers;
	cout << "enter a base Number";
	cin >> userInputBase;

	Convert one(userInputNumbers, userInputBase);

	one.printToScreen();
};