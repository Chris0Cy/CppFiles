#include "SimpleMath.h"


// constructor 
SimpleMath::SimpleMath(int userInputOne, int userInputTwo)
{
	numberOne = userInputOne;
	numberTwo = userInputTwo;
	result = 0;
}

//defining Add() function
int SimpleMath::Add() 
{
	return numberOne + numberTwo;
};

//defining Mult() function
int SimpleMath::Mult()
{
	return numberOne * numberTwo;
};


// empty destructor 
SimpleMath::~SimpleMath()
{
}
