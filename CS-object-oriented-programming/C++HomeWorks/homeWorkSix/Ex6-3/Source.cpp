#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	vector<int> n(10);

	srand(time(0));

	for (size_t i = 0; i < n.size(); ++i)
	{
		n.at(i) = (rand() % 50 + 1);
	}

	cout << "Element" << setw(13) << "Value" << endl;

	for (size_t j = 0; j < n.size(); ++j)
	{
		cout << setw(7) << j << setw(13) << n.at(j) << endl;
	}


}