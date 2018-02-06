#pragma once
class SimpleMath
{
public:
	SimpleMath(int a,int b);
	int Add();
	int Mult();
	~SimpleMath();
private:
	int numberOne;
	int numberTwo;
	int result;
};

