/*
 * Cat.cpp
 *
 *  Created on: Dec. 22, 2018
 *      Author: Yousif
 */

#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat() {
	cout << "Cat created." << endl;

	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed." << endl;
}


void Cat::speak() {
	if(happy) {
		cout << "Meouw!" << endl;
	} else {
		cout << "Sssssss!" << endl;
	}
}

