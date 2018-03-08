#pragma once
#include <vector>

class Set
{
public:
	Set();
	bool isMember(int x);
	Set Union(Set & s);
	Set Interaction(Set & S);
	void print();
	~Set();

private:
	vector<bool> v;
}

