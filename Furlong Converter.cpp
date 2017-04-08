// Furlong Converter.cpp : Defines the entry point for the console application.
// C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int yards = 220;
	int d;

	cout << "Enter a distance in furlongs" << endl;
	cin >> d;
	cout << "The furlong distance is:" "" << d << ".\n";
	cout << "The converted distance in yards = " "" << d * 220 << ".\n";

	return 0;
}