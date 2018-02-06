#// include library/headers
#include "Worker.h"
#include <iostream>
#include <iomanip>

//using standard namespace
using namespace std;


//class constructor
Worker::Worker()
{
	title = "";
	salary = 0.00;
}

//class destructor(not used)
Worker::~Worker()
{
}

//title setter
void Worker::setTitle(string input)
{
	title = input;
}

//salary setter
void Worker::setSalary(double input)
{
	salary = input;
}

//main program/calcuation
void Worker::printOut()
{
	
	//declear data type
	int userInputChoice;
	double valueOne;
	double valueTwo;

	//set output precision to 2 due to the screen unable to display the decimial(.00)
	cout << setprecision(2) << fixed;

	//data initialization to prevent data from overwriting each other
	setSalary(0.00);

		//output to screen and request user input for validation
		cout << "Enter paycode (-1 to end): ";
		cin >> userInputChoice;

		//switch statement for checking
		switch (userInputChoice)
		{

		// case 1(worker is a Manager)
		case 1:
			setTitle("Manager");
			cout << title << " selected." << endl;
			cout << "Enter weekly salary: ";
			cin >> valueOne;
			setSalary(valueOne);
			cout << "Commission Worker's pay is $"  << salary << endl;
			cout << endl;
			printOut();
			break;
		
		//case 3(worker is a Commission worker)
		case 3:
			setTitle("Commission worker");
			cout << title << " selected." << endl;
			cout << "Enter gross weekly sales: ";
			cin >> valueOne;
			setSalary(250 + (valueOne*0.057));
			cout << "Commission Worker's pay is $" << salary << endl;
			cout << endl;
			printOut();
			break;

		//case 2(worker is a hourly worker)
		case 2:
			setTitle("Hourly worker");
			cout << title << " selected." << endl;
			cout << "Enter hourly salary: ";
			cin >> valueOne;
			cout << "Enter the total hours worked: ";
			cin >> valueTwo;
			setSalary(valueOne * valueTwo);
			cout << "Worker's pay is $" << salary << endl;
			cout << endl;
			printOut();
			break;

		//case 4( worker is a Pieceworker)
		case 4:
			setTitle("Pieceworker");
			cout << title << " selected." << endl;
			cout << "Enter number of pieces: ";
			cin >> valueOne;
			cout << "Enter wage per piece :";
			cin >> valueTwo;
			setSalary(valueOne * valueTwo);
			cout << "Pieceworker's pay is $" << salary << endl;
			cout << endl;
			printOut();
			break;
		//case -1(the default for exiting the loop) 
		//stated in the homework
		case -1:
			cout << "bye bye" << endl;
			break;
		}
}