#ifndef Location_h
#define Location_h
#include "Set.h"
#include "Point.h"

enum LOCATION(NOT_FOUND);
enum LOCATION(NEWYORK);
enum LOCATION(SANFRANSISCO);
enum LOCATION(LOSANGELES);
enum LOCATION(CHICAGO);
class Location 
{
public:
	Set New_York_City_X;
	Set New_York_City_Y;
	Set San_Francisco_X;
	Set San_Francisco_Y;
	Set Los_Angeles_X;
	Set Los_Angeles_Y;
	Set Chicago_X;
	Set Chicago_Y;

	Location();
	LOCATION GetLocation(Point &p);
	~Location();
};

#endif /* Location_h */