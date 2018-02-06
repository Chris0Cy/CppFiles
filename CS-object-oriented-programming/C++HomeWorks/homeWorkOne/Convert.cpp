#include "Convert.h"
#include <iostream>
#include <math.h>

using namespace std;


Convert::Convert(int inputNumber, int inputBase)
{
	number = inputNumber;
	base = inputBase;
}


void Convert::printToScreen()
{
	if (number > 999999) {
		cout << "error number is too big" << endl;
		return;
	}

	int total = 0;
	int countingLoop[6];
	countingLoop[0] = (number / 100000);
	number = number % 100000;
	countingLoop[1] = (number / 10000);
	number = number % 10000;
	countingLoop[2] = (number / 1000);
	number = number % 1000;
	countingLoop[3] = (number / 100);
	number = number % 100;
	countingLoop[4] = (number / 10);
	number = number % 10;
	countingLoop[5] = (number / 1);

	cout << "Checking Your Array " << endl;

	for (int i = 0; i < 6; i++)
	{
		if (countingLoop[i] % base != 0)
		{
			cout << countingLoop[i] << " ";
		}
		else {
			cout << "error ";
		}
	}

	total = (countingLoop[0] * pow(base, 5) +
		countingLoop[1] * pow(base, 4) +
		countingLoop[2] * pow(base, 3) +
		countingLoop[3] * pow(base, 2) +
		countingLoop[4] * pow(base, 1) +
		countingLoop[5] * pow(base, 0));

	cout << "\n total value is: " << total << endl;

	int placeHolder;
	cin >> placeHolder;
}

