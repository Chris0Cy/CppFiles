#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int mutiArray[10][10];

	srand(time(0));

	for (int a = 0; a < 10;a++) {
		for (int b= 0;b<10;b++)
		{
			mutiArray[a][b] = rand() % 100 + 1;
		}
	}

	for (int a = 0; a < 10; a++) {
		for (int b = 0; b<10; b++)
		{
			cout << mutiArray[a][b] << " ";
		}
		cout << endl;
	}
	return 0;
};