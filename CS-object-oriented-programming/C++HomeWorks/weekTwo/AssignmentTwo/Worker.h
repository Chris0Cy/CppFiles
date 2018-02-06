//includes library 
#include <string>

//use standard namespace
using namespace std;

#pragma once
//class worker
class Worker
{
//all public variable
public:
	//class constructor
	Worker();

	//class prototype
	void setTitle(string a);
	void setSalary(double a);
	void printOut();

	//class deestructor(not used)
	~Worker();

//all private variable
//to prevent unauthorized data changes
private:
	double salary;
	string title;
};

