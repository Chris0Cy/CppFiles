#pragma once
class Point
{
public:
	Point();
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	~Point();
private:
	int x;
	int y;
};

