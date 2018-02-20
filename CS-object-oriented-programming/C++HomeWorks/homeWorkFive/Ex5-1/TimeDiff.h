#pragma once
class TimeDiff
{
public:
	TimeDiff();
	void SecondsSinceNoon(int &, int &, int &);
	bool ValidateTime();
	~TimeDiff();
private:
	int hour, minute, second;
};

