#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
	studentDepartment = "Non-matriculated";
	studentGPA = 0.0;
}

Student::Student(string cNnames, string fName, string lName, string studentDep, int studentID, double GPA)
	: CommunityMember(cNnames, fName, lName, studentID)
{
	setStudentDepartment(studentDep);
	setStudentGPA(GPA);
}

double Student::getStudentGPA()
{
	return studentGPA;
}

void Student::setStudentDepartment(string a)
{
	studentDepartment = a;
}

string Student::getStudentDepartment()
{
	return studentDepartment;
}

void Student::setStudentGPA(double b)
{
	studentGPA = b;
}

int Student::GetMemberID() const
{
	return  CommunityMember::GetMemberID() * 100 ;
}
Student::~Student()
{
}
