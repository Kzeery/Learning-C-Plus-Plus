//============================================================================
// Name        : Floating.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fvalue = 76.4;
	cout << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fvalue << endl;

	double dValue = 76.4;
	cout << setprecision(20) << fixed << dValue << endl;

	long double lValue = 123.45678976543210;
	cout << setprecision(20) << fixed << lValue << endl;


	return 0;
}
