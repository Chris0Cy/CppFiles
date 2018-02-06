#include "CAI.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


CAI::CAI()
{
}

void CAI::mutiQuestionOne()
{
	int answer = 1;
	int userInput = 0;
	cout << "How much is 1 times 1 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 1 times 1 ?" << endl;
		cin >> userInput;
	}
	
	answerResponesCorrect();
}

void CAI::mutiQuestionTwo()
{
	int answer = 2;
	int userInput = 0;
	cout << "How much is 1 times 2 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 1 times 2 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}

void CAI::mutiQuestionThree()
{
	int answer = 3;
	int userInput = 0;
	cout << "How much is 1 times 3 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 1 times 3 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}

void CAI::mutiQUestionFour()
{
	int answer = 4;
	int userInput = 0;
	cout << "How much is 1 times 4 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 1 times 4 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}

void CAI::mutiQuestionFive()
{
	int answer = 5;
	int userInput = 0;
	cout << "How much is 1 times 5 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 1 times 5 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}

void CAI::divQuestionOne()
{
	int answer = 1;
	int userInput = 0;
	cout << "How much is 1 divide 1 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 1 divide 1 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}

void CAI::divQuestionTwo()
{
	int answer = 2;
	int userInput = 0;
	cout << "How much is 2 divide 1 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 2 divide 1 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}

void CAI::divQuestionThree()
{
	int answer = 3;
	int userInput = 0;
	cout << "How much is 3 divide 1 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 3 divide 1 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}

void CAI::divQuestionFour()
{
	int answer = 4;
	int userInput = 0;
	cout << "How much is 4 divide 1 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 4 divide 1 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}

void CAI::divQuestionFive()
{
	int answer = 5;
	int userInput = 0;
	cout << "How much is 5 divide 1 ?" << endl;
	cin >> userInput;
	while (userInput != answer)
	{
		answerResponeWrong();
		cout << "How much is 5 divide 1 ?" << endl;
		cin >> userInput;
	}

	answerResponesCorrect();
}
void CAI::answerResponesCorrect()
{
	srand(time(NULL));
	int randNum = (rand() % 4) + 1;

	switch (randNum)
	{
	case 1:
		cout << "Very good!" << endl;
		break;
	case 2:
		cout << "Excellent!" << endl;
		break;
	case 3:
		cout << "Nice work!" << endl;
	case 4:
		cout << "Keep up the good work!" << endl;
	default:
		break;
	}

}

void CAI::answerResponeWrong()
{
	srand(time(NULL));
	int randNum = (rand() % 4) + 1;

	switch (randNum)
	{
	case 1:
		cout << "No, Please try again" << endl;
		break;
	case 2:
		cout << "Wrong. Try once more" << endl;
		break;
	case 3:
		cout << "Don't give up!" << endl;
	case 4:
		cout << "No. Keep trying." << endl;
	default:
		break;
	}
}

void CAI::engine() {
	mutiQuestionOne();
	mutiQuestionTwo();
	mutiQuestionThree();
	mutiQUestionFour();
	mutiQuestionFive();
	divQuestionOne();
	divQuestionTwo();
	divQuestionThree();
	divQuestionFour();
	divQuestionFive();
}

CAI::~CAI()
{
}
