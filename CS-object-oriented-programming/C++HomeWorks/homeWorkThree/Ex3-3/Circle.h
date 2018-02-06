#pragma once
class Circle
{
public:
	Circle();
	void getDiameter();
	void getCircumference();
	void getArea();
	void engine();
	~Circle();
private:
	double pi;
	double radius;
};

