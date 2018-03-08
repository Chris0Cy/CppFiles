#pragma once
#include <vector>

using namespace std;

class WordFont
{
public:
	WordFont();
	vector<vector<char>> checkingLetterNoBoldLowSix(string,char); // no bold and font size = 6
	vector<vector<char>> checkingLetterNoBoldLowSeven(string, char); // no bold and font size = 7

	vector<vector<char>> checkingLetterYesBoldHighSix(string, char); // yes bold and front size = 6
	vector<vector<char>> checkingLetterYesBoldHighSeven(string, char); // yes bold and front size = 7

	vector<vector<char>> lowerASix(char); // 6x6 low a
	vector<vector<char>> highASix(char); // 6x6 high A
	vector<vector<char>> lowerASeven(char); // 7x7 low a
	vector<vector<char>> highASeven(char); // 7x7 high A

	vector<vector<char>> lowerBSix(char); // 6x6 low b
	vector<vector<char>> highBSix(char); //6x6 high B
	vector<vector<char>> lowBSeven(char); // 7x7 low b
	vector<vector<char>> highBSeven(char);// 7x7 high B

	vector<vector<char>> lowCSix(char); // 6x6 low c
	vector<vector<char>> highCSix(char);// 6x6 high c
	vector<vector<char>> lowCSeven(char); // 7x7 low c
	vector<vector<char>> highCSeven(char);// 7x7 high c

	vector<vector<char>> lowDSix(char); // 6x6 low d
	vector<vector<char>> HighDSix(char); // 6x6 high d
	vector<vector<char>> lowDSeven(char); // 7x7 low d
	vector<vector<char>> highDSeven(char);// 7x7 high d

	vector<vector<char>> lowESix(char); // 6x6 low e
	vector<vector<char>> highESix(char); // 6x6 high e
	vector<vector<char>> lowESeven(char); // 7x7 low e
	vector<vector<char>> highESeven(char);// 7x7 high e

	vector<vector<char>> lowFSix(char); // 6x6 low f
	vector<vector<char>> highFSix(char); // 6x6 high f
	vector<vector<char>> lowFSeven(char); // 7x7 low f
	vector<vector<char>> highFSeven(char);// 7x7 high f

	vector<vector<char>> lowGSix(char); // 6x6 low g
	vector<vector<char>> highGsix(char); // 6x6 high g
	vector<vector<char>> lowGSeven(char); // 7x7 low g
	vector<vector<char>> highGSeven(char);// 7x7 high g

	vector<vector<char>> lowHSix(char); // 6x6 low h
	vector<vector<char>> highHsix(char); //6x6 high H
	vector<vector<char>> lowHSeven(char); // 7x7 low h
	vector<vector<char>> highHSeven(char);// 7x7 high h

	vector<vector<char>> lowISix(char); // 6x6 low i
	vector<vector<char>> HighISix(char); // 6x6 high I
	vector<vector<char>> lowISeven(char); // 7x7 low i
	vector<vector<char>> highISeven(char);// 7x7 high i

	vector<vector<char>> lowJSix(char); // 6x6 low j
	vector<vector<char>> HighJSix(char); // 6x6 high j
	vector<vector<char>> lowJSeven(char); // 7x7 low j
	vector<vector<char>> highJSeven(char);// 7x7 high j

	vector<vector<char>> lowKSix(char); // 6x6 low k
	vector<vector<char>> HighKSix(char); // 6x6 high k
	vector<vector<char>> lowKSeven(char); // 7x7 low k
	vector<vector<char>> highKSeven(char);// 7x7 high k

	vector<vector<char>> lowOSix(char); // 6x6 low o
	vector<vector<char>> HighOSix(char); // 6x6 high o
	vector<vector<char>> lowOSeven(char); // 7x7 low o
	vector<vector<char>> highOSeven(char);// 7x7 high o

	vector<vector<char>> lowUSix(char); // 6x6 low u
	vector<vector<char>> HighUSix(char); // 6x6 high u
	vector<vector<char>> lowUSeven(char); // 7x7 low u
	vector<vector<char>> highUSeven(char);// 7x7 high u

	vector<vector<char>> lowTSix(char); // 6x6 low t
	vector<vector<char>> HighTSix(char); // 6x6 high t
	vector<vector<char>> lowTSeven(char); // 7x7 low t
	vector<vector<char>> highTSeven(char);// 7x7 high t

	vector<vector<char>> lowXSix(char); // 6x6 low x
	vector<vector<char>> HighXSix(char); // 6x6 high x
	vector<vector<char>> lowXSeven(char); // 7x7 low x
	vector<vector<char>> highXSeven(char);// 7x7 high x


	void engine();
	~WordFont();

private:
	vector<vector<char>> a;
};

