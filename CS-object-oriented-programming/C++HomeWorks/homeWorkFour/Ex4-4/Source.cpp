#include <iostream>
#include "TimeDiff.h"

using namespace std;

int main()
{
	TimeDiff testObj;
	int hour, minute, second;

	cout << "Enter hours: ";
	cin >> hour;
	cout << "Enter minute: ";
	cin >> minute;
	cout << "Enter second: ";
	cin >> second;

	testObj.SecondsSinceNoon(hour, minute, second);

	return -1;
}