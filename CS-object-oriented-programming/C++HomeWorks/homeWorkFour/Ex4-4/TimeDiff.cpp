#include "TimeDiff.h"
#include <iostream>

using namespace std;

TimeDiff::TimeDiff()
{
}

void TimeDiff::SecondsSinceNoon(int a, int b, int c)
{
	hour = a;
	minute = b;
	second = c;


	if (ValidateTime() == true)
	{
		if (hour >= 12)
		{
			hour -= 12;
		}
		else
		{
			hour += 12;
		}

		if (minute <= 0)
		{
			minute = 1;
		}

		if (second <= 0)
		{
			second = 1;
		}


		
		minute += (hour * 60);
		second += (minute * 60);
		cout << "your total second is: " << second << endl;
	}

}

bool TimeDiff::ValidateTime()
{
	if ((hour >= 24)||(minute >= 60) || (second >= 60))
	{

		cout << "Invalied time entered! A" << endl;
		return false;
	}
	else {
		return true;
	}
	
	

}

TimeDiff::~TimeDiff()
{
}
