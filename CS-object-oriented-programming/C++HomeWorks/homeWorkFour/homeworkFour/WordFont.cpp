#include "WordFont.h"
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

WordFont::WordFont()
// using the class initialization list to 
// construct vector as a [10][5] mulitdemensional vector, initialized to all 0
	: myMultiVector(10, vector<char>(1, 0))
{
	// iterate through the vector and put some data in it
	for (int rows = 0; rows<myMultiVector.size(); rows++)
	{
		for (int cols = 0; cols<myMultiVector.at(0).size(); cols++)
		{
			// put some data in each row and column using the vector.at() method
			//myMultiVector.at(rows).at(cols) = rows + cols;

			// alternatively, this would work as well, and be acceptable
			 myMultiVector[rows][cols] = '*';
		}
	}
}



// 6x6 low/high
//a 6x6
void WordFont::lowerASix(char pixel) 
{
	//6x6 low A
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
} 
void WordFont::highASix(char pixel)
{
	//6x6 low A
	vector<vector<char>> letter{
		{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel } };
}
//7x7 low/high
void WordFont::lowerASeven(char pixel)
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
}
void WordFont::highASeven(char pixel)
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
}


//b 6x6
void WordFont::lowerBSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' '},
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::highBSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
//b 7x7
void WordFont::lowBSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::highBSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}



//c 6x6
void WordFont::lowCSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::highCSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
//c 7x7
void WordFont::lowCSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::highCSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}


//d 6x6
void WordFont::lowDSix(char pixel)
{
	//6x6 low d
	vector<vector<char>> letter{
	{ ' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::HighDSix(char pixel)
{
	//6x6 high 
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,' ' } };
}
//d 7x7
void WordFont::lowDSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::highDSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,' ' } };
}


//e 6x6
void WordFont::lowESix(char pixel)
{
	vector<vector<char>> letter{
		{ ' ',' ',pixel,' ',' ',' ' },
	{ ' ',pixel,' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::highESix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
//e 7x7
void WordFont::lowESeven(char pixel)
{
	vector<vector<char>> letter{
		{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' } };
}
void WordFont::highESeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}


// f 6x6
void WordFont::lowFSix(char pixel)
{
	vector<vector<char>> letter{
	{' ',' ',pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,' ',' ',' ' } };
}
void WordFont::highFSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' } };
}
//f 7x7
void WordFont::lowFSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,' ',' ',' ',' ' } };
}
void WordFont::highFSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' } };
}


// g 6x6 
void WordFont::lowGSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::highGsix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
// g 7x7 
void WordFont::lowGSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}
void WordFont::highGSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}


// H 6x6
void WordFont::lowHSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel } };
}
void WordFont::highHsix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel } };
}
// h 7x7
void WordFont::lowHSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel } };
}
void WordFont::highHSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel } };
}


// i 6x6
void WordFont::lowISix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' } };
}
void WordFont::HighISix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
// i 7x7
void WordFont::lowISeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' } };
}
void WordFont::highISeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel } };
}


// j 6x6
void WordFont::lowJSix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' } };
}
void WordFont::HighJSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' } };
}
// j 7x7
void WordFont::lowJSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,' ',pixel,' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ',' ' } };
}
void WordFont::highJSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,' ',pixel,' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ',' ' } };
}


// k 6x6
void WordFont::lowKSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ' } };
}
void WordFont::HighKSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',pixel,pixel },
	{ pixel,' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ' },
	{ pixel,' ',pixel,pixel,' ',' ' },
	{ pixel,' ',' ',' ',pixel,pixel } };
}
//k 7x7
void WordFont::lowKSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' } };
}
void WordFont::highKSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',pixel,' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ',' ' },
	{ pixel,pixel,' ',' ',' ',' ',' ' },
	{ pixel,' ',pixel,' ',' ',' ',' ' },
	{ pixel,' ',' ',pixel,' ',' ',' ' },
	{ pixel,' ',' ',' ',pixel,' ',' ' } };
}


// o 6x6
void WordFont::lowOSix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,' ' } };
}
void WordFont::HighOSix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,' ',' ',pixel,pixel },
	{ pixel,pixel,' ',' ',pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',pixel,pixel,pixel,pixel,' ' } };
}
// o 7x7
void WordFont::lowOSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' } };
}
void WordFont::highOSeven(char pixel)
{
	vector<vector<char>> letter{
		{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' } };
}


// u 6x6
void WordFont::lowUSix(char pixel)
{

	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',pixel,' ' },
	{ pixel,pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',' ',' ',' ',pixel } };
}
void WordFont::HighUSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel } };
}
// u 7x7
void WordFont::lowUSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',pixel,' ' },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',' ',' ',' ',' ',pixel } };
}
void WordFont::highUSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,pixel,' ' } };
}

// t 6x6
void WordFont::lowTSix(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' } };
}
void WordFont::HighTSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ pixel,pixel,pixel,pixel,' ',' ' } };
}
//t 7x7
void WordFont::lowTSeven(char pixel)
{
	vector<vector<char>> letter{
	{ ' ',' ',' ',' ',' ',' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,' ',' ',' ',' ' } };
}
void WordFont::highTSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,pixel,pixel,pixel,pixel },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ pixel,pixel,pixel,' ',' ',' ',' ' } };
}

// x 6x6
void WordFont::lowXSix(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',pixel,pixel,' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',pixel,pixel,' ',pixel } };
}
void WordFont::HighXSix(char pixel)
{
	vector<vector<char>> letter{
		{ pixel,' ',pixel,pixel,' ',pixel },
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',' ',pixel,pixel,' ',' ' },
	{ ' ',pixel,pixel,pixel,pixel,' ' },
	{ pixel,' ',pixel,pixel,' ',pixel } };
}
// x 7x7
void WordFont::lowXSeven(char pixel)
{
	vector<vector<char>> letter{
	{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,' ',' ',' ',pixel,' ' },
	{ ' ',' ',pixel,' ',pixel,' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',pixel,' ',pixel,' ',' ' },
	{ ' ',pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel } };
}
void WordFont::highXSeven(char pixel)
{
	vector<vector<char>> letter{
		{ pixel,' ',' ',' ',' ',' ',pixel },
	{ ' ',pixel,' ',' ',' ',pixel,' ' },
	{ ' ',' ',pixel,' ',pixel,' ',' ' },
	{ ' ',' ',' ',pixel,' ',' ',' ' },
	{ ' ',' ',pixel,' ',pixel,' ',' ' },
	{ ' ',pixel,' ',' ',' ',pixel,' ' },
	{ pixel,' ',' ',' ',' ',' ',pixel } };
}


void WordFont::printOut()
{
	for (int rows = 0; rows<myMultiVector.size(); rows++)
	{
		for (int cols = 0; cols<myMultiVector.at(0).size(); cols++)
		{
			// put some data in each row and column, using subscript notation
			cout << setw(4) << right << myMultiVector[rows][cols];

			// alternatively, this would work as well, and be acceptable
			// cout << myMultiVector.at(rows).at(cols);
		}

		// put a new line before printing the next row of data
		cout << endl;
	}
}

void WordFont::engine() 
{
	char userInputCharacter, pixel;
	int fontSize;
	bool yesOrNoBold;

	cout << "Enter a word using, a ,b, c, d, e, f, g, h, i, j, k, t, x, o , u";
	cout << "Enter the pixel character you want to use to draw: ";
	cin >> pixel;
	cout << "ENter the Font Size (6-7): ";
	cin >> fontSize;
	cout << "Bold? (0=No, 1= Yes";
	cin >> yesOrNoBold;
	
}


WordFont::~WordFont()
{
}
