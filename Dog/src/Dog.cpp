//============================================================================
// Name        : Dog.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Dog.h"
using namespace std;

Dog::Dog() {
	happy = true;
	cout << "Dog created" << endl;
}

Dog::~Dog() {
	cout << "Dog destroyed" << endl;
}
void Dog::bark() {
	if (happy) {
		cout << "Ruff Ruff" << endl;
	} else {
		cout << "Grrrr" << endl;
	}
}

