// User-defined_Output.cpp : Defines the entry point for the console application.
/*C++ program that uses three user-defined functions (counting main() as one)
and produces the following output :
Three blind mice
Three blind mice
See how they run
See how they run
One function, called two times, should produce the first two lines, and the remaining
function, also called twice, should produce the remaining output.
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int FirstFunction();
int SecondFunction();

int main()
	{
		FirstFunction();
		FirstFunction();
		SecondFunction();
		SecondFunction();
	}

int FirstFunction() 
	{
		cout << "Three Blind Mice" << endl;
		return 0;
	}

int SecondFunction()
	{
	cout << "See How They Run" << endl;
	return 0;
	}
