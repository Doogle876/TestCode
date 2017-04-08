// Celsius-Fahrenheit_Converter.cpp : Defines the entry point for the console application.
/*C++ program that has main() call a user-defined function that takes a Celsius temperature
value as an argument and then returns the equivalent Fahrenheit value.The program
should request the Celsius value as input from the user and display the result.
*/
#include "stdafx.h"
#include<iostream>

using namespace std;

int TempConverter(int);

int main()
{
	int Celsius;
	cout << "Please Enter Temperature in Celsius " << endl;
	cin >> Celsius;
	cout << "Degrees Entered in Celsius is " << Celsius << endl;
	cout << "Degrees Converted to Fahrenheit is " << TempConverter(Celsius) << endl;

	return 0;
}

int TempConverter(int Celsius)
{
	int Fahrenheit = 1.8 * Celsius + 32.0;

	return Fahrenheit;
}