//============================================================================
// Name        : Arithmetic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int main() {


	int seconds1;
	cout << "How many seconds would you like to convert?  " << flush;
	cin >> seconds1;
	int minutes1 = seconds1/60;
	int hours = minutes1/60;
	int seconds = seconds1 % 60;
	int minutes = minutes1 % 60;

	cout << seconds1 << " seconds is equivalent to: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;


	return 0;

}
