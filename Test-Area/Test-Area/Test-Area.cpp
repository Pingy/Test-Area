// Test-Area.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{	

	cout << "Please enter a value for a" << endl;
	double a;
	cin >> a;
	cout << "Please enter a value for b" << endl;
	double b;
	cin >> b;
	double c = sqrt(pow(a,2) + pow(b,2));
	cout << "The variable c equals " << c << "." << endl;
	system("pause>nul");

	return 0;
}

