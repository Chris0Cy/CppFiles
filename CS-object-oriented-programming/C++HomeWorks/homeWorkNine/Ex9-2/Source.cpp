///////////////////////////////////////////////////////////
// Source.cpp
// CIS554 Object Oriented Programming in C++
// Exercise 9_1 - Simple Intheritance
//                program test 
///////////////////////////////////////////////////////////

#include "CommunityMember.h"
#include "Employee.h"
#include "Student.h"
#include <iostream>
using std::cout;
using std::endl;

// Demonstrate CommunityMember class
void DemonstrateCommunityMember(CommunityMember &);

// Demonstrate Employee class
void DemonstrateEmployee(Employee &);




int main()
{
	// demonstrate CommunityMember default constructor
	cout << "***** Demonstrating the default constructor, and member methods, for class CommunityMember" << endl;
	CommunityMember commMember;
	DemonstrateCommunityMember(commMember);
	cout << endl;

	// demonstrate CommunityMember initialization constructor
	cout << "***** Demonstrating the initialization constructor, and member methods, for class CommunityMember" << endl;
	CommunityMember commMemberHarry("Syracuse University", "Harry", "Potter", 1234);
	DemonstrateCommunityMember(commMemberHarry);
	cout << endl;


	// demonstrate Employee default constructor
	cout << "***** Demonstrating the default constructor, and member methods, for class Employee" << endl;
	Employee commMemberEmp;
	DemonstrateEmployee(commMemberEmp);
	cout << endl;

	// demonstrate Employee initialization constructor
	cout << "***** Demonstrating the initialization constructor, and member methods, for class Employee" << endl;
	Employee commMemberEmpHarry("Syracuse University", "Harry", "Potter", 1234, "Janitor", 25000);
	DemonstrateEmployee(commMemberEmpHarry);
	cout << endl;

	Student studentOne("Syracuse University", "firstName", "lastName", "super engineering", 123456, 10.10);


	cout << "Student middle name: " << studentOne.GetCommunityName() << endl;
	cout << "Student first name: " << studentOne.GetFirstName() << endl;
	cout << "Student last name: " << studentOne.GetLastName() << endl;
	cout << "student Department: " << studentOne.getStudentDepartment() << endl;
	cout << "Student GPA: " << studentOne.getStudentGPA() << endl;
	cout << "Student memberID: " << studentOne.GetMemberID() << endl;
	cout << endl;

	getchar();
}

void DemonstrateCommunityMember(CommunityMember & c)
{
	cout << c.GetFirstName() << " "
		<< c.GetLastName()
		<< " is a member of the " << c.GetCommunityName() << " community, with member ID " << c.GetMemberID() << endl;
}

void DemonstrateEmployee(Employee & c)
{
	cout << c.GetFirstName() << " "
		<< c.GetLastName()
		<< " is a member of the " << c.GetCommunityName() << " community, " << " with member ID " << c.GetMemberID() << endl
		<< "He/She is an employee with Job Title: " << c.GetJobTitle() << ", making "
		<< c.GetYearlySalary() << " per year." << endl;
}
