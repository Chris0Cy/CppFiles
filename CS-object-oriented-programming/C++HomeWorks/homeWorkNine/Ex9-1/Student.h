#pragma once
#include "CommunityMember.h"
class Student :
	public CommunityMember
{
public:
	Student();
	Student(string cNname, string fName, string lName,string, int, double);
	string getStudentDepartment();
	void setStudentDepartment(string);
	double getStudentGPA();
	void setStudentGPA(double);
	~Student();

private:
	string studentDepartment;
	double studentGPA;

};

