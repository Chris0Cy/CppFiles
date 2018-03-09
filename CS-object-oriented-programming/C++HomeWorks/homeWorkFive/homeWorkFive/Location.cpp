#include "Location.h"
#include "Set.h"
#include <vector>

using namespace std;

Location::Location()
{
	New_York_City_X = Set(vector<int>({ 0, 1, 2, 3, 4 ,5 }));
	New_York_City_Y = Set(vector<int>({ 0, 1, 2, 3, 4 ,5 }));
	San_Francisco_X = Set(vector<int>({ 6, 7, 8, 9, 10 }));
	San_Francisco_Y = Set(vector<int>({ 6, 7, 8, 9, 10 }));
	Los_Angeles_X  = Set(vector<int>({ 11, 12, 13, 14 ,15 }));
	Los_Angeles_Y = Set(vector<int>({ 11, 12, 13, 14 ,15 }));
	Chicago_X = Set(vector<int>({ 16, 17, 18, 19, 20 }));
	Chicago_Y = Set(vector<int>({ 16, 17, 18 ,19, 20 }));

}

LOCATION Location::GetLocation(Point &p)
{
	if (New_York_City_X.isMember(p.getX()) && New_York_City_Y.isMember(p.getY()))
	{
		return NEWYORK;
	}
	if (San_Francisco_X.isMember(p.getX()) && San_Francisco_Y.isMember(p.getY()))
	{
		return SANFRANSISCO;
	}
	if (Los_Angeles_X.isMember(p.getX() && Los_Angeles_Y.isMember(p.getY())))
	{
		return LOSANGELES;
	}
	if (Chicago_X.isMember(p.getX() && Chicago_Y.isMember(p.getY())))
	{
		return CHICAGO;
	}

	return NOT_FOUND;
}

Location::~Location()
{
}
