#include "Set.h"
#include <vector>
#include <iostream>

using namespace std;

Set::Set(const vector<int> & a)
{
	v = vector<int>(a);
}

Set::Set()
{

}

bool Set::isMember(int x) // missing
{
	for (int i = 0; i<v.size();i++)
	{
		if (v[i] == x)
		{
			return true;
		}
		return false;
	}

}

Set Set::Union(Set &S) // missing
{
	Set U(S.v);
	for (int i = 0; i < v.size(); i++)
	{
		if (!S.isMember(v[i]))
		{
			U.v.push_back(v[i]);
		}
	}
	return U;
}

Set Set::Interaction(Set & S) //missing
{
	vector<int> v;
	for (int i = 0; i < v.size(); i++)
	{
		if (S.isMember(v[i]))
		{
			v.push_back(v[i]);
		}
	}
	return Set(v);
}

void Set::print()
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
}

Set::~Set()
{
}
