//============================================================================
// Name        : This.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person person1;
	Person person2("Bob", 42);
	Person person3("Sue", 25);


	cout << person3.toString() << "; memory locaton: " << &person3 << endl;
	cout << person2.toString() << "; memory locaton: " << &person2 << endl;
	return 0;
}
