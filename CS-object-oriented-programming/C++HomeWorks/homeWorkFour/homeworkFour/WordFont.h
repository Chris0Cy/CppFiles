#pragma once
#include <vector>

using namespace std;

class WordFont
{
public:
	WordFont();
	void printOut();

	void lowerASix(char); // 6x6 low a
	void highASix(char); // 6x6 high A
	void lowerASeven(char); // 7x7 low a
	void highASeven(char); // 7x7 high A

	void lowerBSix(char); // 6x6 low b
	void highBSix(char); //6x6 high B
	void lowBSeven(char); // 7x7 low b
	void highBSeven(char);// 7x7 high B

	void lowCSix(char); // 6x6 low c
	void highCSix(char);// 6x6 high c
	void lowCSeven(char); // 7x7 low c
	void highCSeven(char);// 7x7 high c

	void lowDSix(char); // 6x6 low d
	void HighDSix(char); // 6x6 high d
	void lowDSeven(char); // 7x7 low d
	void highDSeven(char);// 7x7 high d

	void lowESix(char); // 6x6 low e
	void highESix(char); // 6x6 high e
	void lowESeven(char); // 7x7 low e
	void highESeven(char);// 7x7 high e

	void lowFSix(char); // 6x6 low f
	void highFSix(char); // 6x6 high f
	void lowFSeven(char); // 7x7 low f
	void highFSeven(char);// 7x7 high f

	void lowGSix(char); // 6x6 low g
	void highGsix(char); // 6x6 high g
	void lowGSeven(char); // 7x7 low g
	void highGSeven(char);// 7x7 high g

	void lowHSix(char); // 6x6 low h
	void highHsix(char); //6x6 high H
	void lowHSeven(char); // 7x7 low h
	void highHSeven(char);// 7x7 high h

	void lowISix(char); // 6x6 low i
	void HighISix(char); // 6x6 high I
	void lowISeven(char); // 7x7 low i
	void highISeven(char);// 7x7 high i

	void lowJSix(char); // 6x6 low j
	void HighJSix(char); // 6x6 high j
	void lowJSeven(char); // 7x7 low j
	void highJSeven(char);// 7x7 high j

	void lowKSix(char); // 6x6 low k
	void HighKSix(char); // 6x6 high k
	void lowKSeven(char); // 7x7 low k
	void highKSeven(char);// 7x7 high k

	void lowOSix(char); // 6x6 low o
	void HighOSix(char); // 6x6 high o
	void lowOSeven(char); // 7x7 low o
	void highOSeven(char);// 7x7 high o

	void lowUSix(char); // 6x6 low u
	void HighUSix(char); // 6x6 high u
	void lowUSeven(char); // 7x7 low u
	void highUSeven(char);// 7x7 high u

	void lowTSix(char); // 6x6 low t
	void HighTSix(char); // 6x6 high t
	void lowTSeven(char); // 7x7 low t
	void highTSeven(char);// 7x7 high t

	void lowXSix(char); // 6x6 low x
	void HighXSix(char); // 6x6 high x
	void lowXSeven(char); // 7x7 low x
	void highXSeven(char);// 7x7 high x

	void engine();
	~WordFont();

private:
	vector<vector<char>> myMultiVector;

};

