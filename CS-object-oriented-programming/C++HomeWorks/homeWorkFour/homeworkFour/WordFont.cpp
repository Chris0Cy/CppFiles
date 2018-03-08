#include "WordFont.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

WordFont::WordFont()
{
}



// 6x6 low/high
//a 6x6
vector<vector<char>> WordFont::lowerASix(char pixel)
{
	//6x6 low A
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
} 
vector<vector<char>> WordFont::highASix(char pixel)
{
	//6x6 low A
	vector<vector<char>> letter{
		{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel } };

	return letter;
}
//7x7 low/high
vector<vector<char>> WordFont::lowerASeven(char pixel)
{
	//7x7 low A
	vector<vector<char>> letter{
		{ pixel,pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highASeven(char pixel)
{
	//7x7 low a
	vector<vector<char>> letter{
		{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel } };

	return letter;
}


//b 6x6
vector<vector<char>> WordFont::lowerBSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' '},
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highBSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
//b 7x7
vector<vector<char>> WordFont::lowBSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highBSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}


//c 6x6
vector<vector<char>> WordFont::lowCSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highCSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
//c 7x7
vector<vector<char>> WordFont::lowCSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highCSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}


//d 6x6
vector<vector<char>> WordFont::lowDSix(char pixel)
{
	//6x6 low d
	vector<vector<char>> letter{
	{ ' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::HighDSix(char pixel)
{
	//6x6 high 
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,' ' } };

	return letter;
}
//d 7x7
vector<vector<char>> WordFont::lowDSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highDSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,' ' } };

	return letter;
}


//e 6x6
vector<vector<char>> WordFont::lowESix(char pixel)
{
	vector<vector<char>> letter{
		{ ' ',' ',pixel,' ',' ',' ' },
	{ ' ',pixel,' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highESix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
//e 7x7
vector<vector<char>> WordFont::lowESeven(char pixel)
{
	vector<vector<char>> letter{
		{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' } };

	return letter;
}
vector<vector<char>> WordFont::highESeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}


// f 6x6
vector<vector<char>> WordFont::lowFSix(char pixel)
{
	vector<vector<char>> letter{
	{' ',' ',pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,' ',' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::highFSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' } };

	return letter;
}
//f 7x7
vector<vector<char>> WordFont::lowFSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,' ',' ',' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::highFSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' } };

	return letter;
}


// g 6x6 
vector<vector<char>> WordFont::lowGSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highGsix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
// g 7x7 
vector<vector<char>> WordFont::lowGSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
vector<vector<char>> WordFont::highGSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}


// H 6x6
vector<vector<char>> WordFont::lowHSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel } };

	return letter;
}
vector<vector<char>> WordFont::highHsix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel } };

	return letter;
}
// h 7x7
vector<vector<char>> WordFont::lowHSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel } };

	return letter;
}
vector<vector<char>> WordFont::highHSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel } };

	return letter;
}


// i 6x6
vector<vector<char>> WordFont::lowISix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::HighISix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
// i 7x7
vector<vector<char>> WordFont::lowISeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::highISeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}


// j 6x6
vector<vector<char>> WordFont::lowJSix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::HighJSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' } };

	return letter;
}
// j 7x7
vector<vector<char>> WordFont::lowJSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,' ',pixel,' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::highJSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,' ',pixel,' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ',' ' } };

	return letter;
}


// k 6x6
vector<vector<char>> WordFont::lowKSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::HighKSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',pixel,pixel },
	{ pixel,' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,' ',pixel,pixel,' ',' ' },
	{ pixel,' ',' ',' ',pixel,pixel } };

	return letter;
}
//k 7x7
vector<vector<char>> WordFont::lowKSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::highKSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',pixel,' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,' ',' ',' ',pixel,' ',' ' } };

	return letter;
}


// o 6x6
vector<vector<char>> WordFont::lowOSix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,' ' } };

	return letter;
}
vector<vector<char>> WordFont::HighOSix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,' ',' ',pixel,pixel },
	{ pixel,pixel,' ',' ',pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',pixel,pixel,pixel,pixel,' ' } };

	return letter;
}
// o 7x7
vector<vector<char>> WordFont::lowOSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' } };

	return letter;
}
vector<vector<char>> WordFont::highOSeven(char pixel)
{
	vector<vector<char>> letter{
		{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' } };

	return letter;
}


// u 6x6
vector<vector<char>> WordFont::lowUSix(char pixel)
{

	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',' ',' ',' ',pixel } };

	return letter;
}
vector<vector<char>> WordFont::HighUSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };

	return letter;
}
// u 7x7
vector<vector<char>> WordFont::lowUSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',' ',' ',' ',' ',pixel } };

	return letter;
}
vector<vector<char>> WordFont::highUSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' } };

	return letter;
}

// t 6x6
vector<vector<char>> WordFont::lowTSix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::HighTSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' } };

	return letter;
}
//t 7x7
vector<vector<char>> WordFont::lowTSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,' ',' ',' ',' ' } };

	return letter;
}
vector<vector<char>> WordFont::highTSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,' ',' ',' ',' ' } };

	return letter;
}

// x 6x6
vector<vector<char>> WordFont::lowXSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',pixel,pixel,' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',pixel,pixel,' ',pixel } };

	return letter;
}
vector<vector<char>> WordFont::HighXSix(char pixel)
{
	vector<vector<char>> letter{
		{ pixel,' ',pixel,pixel,' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',pixel,pixel,' ',pixel } };

	return letter;
}
// x 7x7
vector<vector<char>> WordFont::lowXSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,' ',' ',' ',pixel,' ' },
	{ ' ',' ',pixel,' ',pixel,' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',pixel,' ',pixel,' ',' ' },
	{ ' ',pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel } };

	return letter;
}
vector<vector<char>> WordFont::highXSeven(char pixel)
{
	vector<vector<char>> letter{
		{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,' ',' ',' ',pixel,' ' },
	{ ' ',' ',pixel,' ',pixel,' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',pixel,' ',pixel,' ',' ' },
	{ ' ',pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel } };

	return letter;
}



vector<vector<char>> WordFont::checkingLetterNoBoldLowSix(string userInputCharacter,char pixel) // no bold and font size = 6
{
	for (int i = 0; i < userInputCharacter.length(); i++)
	{
		switch (userInputCharacter[i])
		{
		case 'a':
			lowerASix(pixel);
			break;
		case 'b':
			lowerBSix(pixel);
			break;
		case 'c':
			lowCSix(pixel);
			break;
		case 'd':
			lowDSix(pixel);
			break;
		case 'e':
			lowESix(pixel);
			break;
		case 'f':
			lowFSix(pixel);
			break;
		case 'g':
			lowGSix(pixel);
			break;
		case 'h':
			lowHSix(pixel);
			break;
		case 'i':
			lowISix(pixel);
			break;
		case 'j':
			lowJSix(pixel);
			break;
		case 'k':
			lowKSix(pixel);
			break;
		case 't':
			lowTSix(pixel);
			break;
		case 'x':
			lowXSix(pixel);
			break;
		case 'o':
			lowOSix(pixel);
			break;
		case 'u':
			lowUSix(pixel);
			break;
		default:
			return;
			break;
		}
	}
}


vector<vector<char>> WordFont:: checkingLetterNoBoldLowSeven(string userInputCharacter, char pixel) // no bold and font size = 7
{
	for (int i = 0; i < userInputCharacter.length(); i++)
	{
		switch (userInputCharacter[i])
		{
			case 'a':
				lowerASeven(pixel);
				break;
			case 'b':
				lowBSeven(pixel);
				break;
			case 'c':
				lowCSeven(pixel);
				break;
			case 'd':
				lowDSeven(pixel);
				break;
			case 'e':
				lowESeven(pixel);
				break;
			case 'f':
				lowFSeven(pixel);
				break;
			case 'g':
				lowGSeven(pixel);
				break;
			case 'h':
				lowHSeven(pixel);
				break;
			case 'i':
				lowISeven(pixel);
				break;
			case 'j':
				lowJSeven(pixel);
				break;
			case 'k':
				lowKSeven(pixel);
				break;
			case 't':
				lowTSeven(pixel);
				break;
			case 'x':
				lowXSeven(pixel);
				break;
			case 'o':
				lowOSeven(pixel);
				break;
			case 'u':
				lowUSeven(pixel);
				break;
			default:
				return;
				break;
		}
	}
}

vector<vector<char>> WordFont:: checkingLetterYesBoldHighSix(string userInputCharacter, char pixel) // Yes bold and font size = 6
{
	for (int i = 0; i < userInputCharacter.length(); i++)
	{
		switch (userInputCharacter[i])
		{
		case 'a':
			highASix(pixel);
			break;
		case 'b':
			highBSix(pixel);
			break;
		case 'c':
			highCSix(pixel);
			break;
		case 'd':
			HighDSix(pixel);
			break;
		case 'e':
			highESix(pixel);
			break;
		case 'f':
			highFSix(pixel);
			break;
		case 'g':
			highGsix(pixel);
			break;
		case 'h':
			highHsix(pixel);
			break;
		case 'i':
			HighISix(pixel);
			break;
		case 'j':
			HighJSix(pixel);
			break;
		case 'k':
			HighKSix(pixel);
			break;
		case 't':
			HighTSix(pixel);
			break;
		case 'x':
			HighXSix(pixel);
			break;
		case 'o':
			HighOSix(pixel);
			break;
		case 'u':
			HighUSix(pixel);
			break;
		default:
			return;
			break;
		}
	}
}

vector<vector<char>> WordFont:: checkingLetterYesBoldHighSeven(string userInputCharacter, char pixel) // yes bold and front size = 7
{
	for (int i = 0; i < userInputCharacter.length(); i++)
	{
		switch (userInputCharacter[i])
		{
		case 'a':
			highASeven(pixel);
			break;
		case 'b':
			highBSeven(pixel);
			break;
		case 'c':
			highCSeven(pixel);
			break;
		case 'd':
			highDSeven(pixel);
			break;
		case 'e':
			highESeven(pixel);
			break;
		case 'f':
			highFSeven(pixel);
			break;
		case 'g':
			highGSeven(pixel);
			break;
		case 'h':
			highHSeven(pixel);
			break;
		case 'i':
			highISeven(pixel);
			break;
		case 'j':
			highJSeven(pixel);
			break;
		case 'k':
			highKSeven(pixel);
			break;
		case 't':
			highTSeven(pixel);
			break;
		case 'x':
			highXSeven(pixel);
			break;
		case 'o':
			highOSeven(pixel);
			break;
		case 'u':
			highUSeven(pixel);
			break;
		default:
			return;
			break;
		}
	}
}

void WordFont::engine() 
{
	char pixel;
	string userInputCharacter;
	int fontSize;
	int yesOrNoBold;

	vector<vector<char>> a;
	vector<vector<char>> b;
	vector<vector<char>> c;

	cout << "Enter a word using, a ,b, c, d, e, f, g, h, i, j, k, t, x, o , u: ";
	cin >> userInputCharacter;
	cout << "Enter the pixel character you want to use to draw: ";
	cin >> pixel;
	cout << "ENter the Font Size (6-7): ";
	cin >> fontSize;
	cout << "Bold? (0=No, 1= Yes)";
	cin >> yesOrNoBold;

	// no bold
	if (yesOrNoBold == 0)
	{
		if (fontSize == 6)
		{
			a = checkingLetterNoBoldLowSix(userInputCharacter, pixel);
		}
		if (fontSize == 7)
		{
			checkingLetterNoBoldLowSeven(userInputCharacter, pixel);
		}
	}
	
	// bold
	if (yesOrNoBold == 1)
	{
		if (fontSize == 6)
		{
			checkingLetterYesBoldHighSix(userInputCharacter, pixel);
		}
		if (fontSize == 7)
		{
			checkingLetterYesBoldHighSeven(userInputCharacter, pixel);
		}
	}
}



WordFont::~WordFont()
{
}
