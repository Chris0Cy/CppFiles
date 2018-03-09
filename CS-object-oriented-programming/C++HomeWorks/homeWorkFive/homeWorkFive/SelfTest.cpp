#include "Set.h"
#include <iostream>
using namespace std;
int main()
{
	vector<int> v1 = { 1, 3, 5, 7, 9 };
	vector<int> v2 = { 2, 4, 6, 8,  };
	Set A(v1), B(v2);
	cout << "Set A: ";
	A.print();
	cout << "Set B: ";
	B.print();

	Set un = A.Union(B), inter = A.Interaction(B);

	cout << "Set A union B: ";
	un.print();
	cout << "Set A intersection B: ";
	inter.print();

	getchar();

	return 0;
}