#include <iostream>

using namespace std;

int recrusiveFunctionAdding(int *a)
{
	if (*a == 1) {
		return 1;
	}
	else {
		return *a + recrusiveFunctionAdding(a - 1);
	}
}

// Professor, I don't know how to call a recurssion using pointer because 
// the value within that location is actually changing.
int main()
{
	int test = 10;
	int result = 0;

	result = recrusiveFunctionAdding(&test);

	cout << result;

	int testFile;
	cin >> testFile;

	return 0;
}