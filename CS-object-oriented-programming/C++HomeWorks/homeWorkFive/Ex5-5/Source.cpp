#include <iostream>

using namespace std;

int recrusiveFunctionAdding(int a) 
{
	if (a == 1) {
		return 1;
	}
	else {
		return a + recrusiveFunctionAdding(a - 1);
	}
}
int main()
{
	int test;

	test = recrusiveFunctionAdding(10);

	cout << test;

	return 0;
}