#include <iostream>
#include "TimeDiff.h"

using namespace std;

int main()
{
	TimeDiff testObj;
	int hour, minute, second;
	int &hourRef = hour;
	int &minuteRef = minute;
	int &secondRef = second;

	cout << "Enter hours: ";
	cin >> hour;
	cout << "Enter minute: ";
	cin >> minute;
	cout << "Enter second: ";
	cin >> second;

	testObj.SecondsSinceNoon(hourRef, minuteRef, secondRef);

	cout << "hourRef = " << hour;
	cout << "minuteRef = " << minute;
	cout << "secondRef = " << second;

	int testingString;
	cin >> testingString;

	return -1;
}