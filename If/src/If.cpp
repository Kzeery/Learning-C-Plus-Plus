//============================================================================
// Name        : If.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";
	string input;
	while (input != password) {
		cout << "Enter your password > " << flush;

		cin >> input;

		if (input == password) {
			cout << "Access granted." << endl;
		} else {
			cout << "Access denied." << endl;
		}
	}
	return 0;
}
