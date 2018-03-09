#pragma once
#include <vector>
#include "Set.h"

using namespace std;

class Set
{
public:
	Set();
	Set(const vector<int> &v);
	bool isMember(int x);
	Set Union(Set & s);
	Set Interaction(Set & S);
	void print();
	~Set();

private:
	vector<int> v;
};

