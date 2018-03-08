#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

int main()
{
	Time t;
	Time *PtrT = &t;

	cout << "The initial Universal Time is ";
	t.printUniversal();
	cout << "\nThe inital standard time is ";
	t.printStandard();
	
	t.setTime(13, 27, 6);

	cout << "\nThe inital standard time is ";
	PtrT->printStandard();
	cout << "The initial Universal Time is ";
	PtrT->printUniversal();
}