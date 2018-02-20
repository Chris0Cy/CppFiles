#include <iostream>
#include <iomanip>
#include <array>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	array<int, 5>n;

	srand(time(0));

	cout << "value" << setw(7) <<  endl;

	for (int b :n)
	{
		b = rand() % 50 + 1;
		cout << setw(7) << b  << endl;
	}

}