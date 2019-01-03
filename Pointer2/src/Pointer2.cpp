//============================================================================
// Name        : Pointer2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(int *number) {
	*number = 345;
	cout << *number << endl;
}

int main() {

	int number = 234;

	cout << number << endl;

	manipulate(&number);
	cout << number << endl;
	return 0;
}
