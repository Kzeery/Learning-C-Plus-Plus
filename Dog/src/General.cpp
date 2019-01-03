/*
 * General.cpp
 *
 *  Created on: Dec. 22, 2018
 *      Author: Yousif
 */
#include <iostream>

#include "Dog.h"
using namespace std;

int main() {

	cout << "Program started..." << endl;
	{
	Dog dog1;
	dog1.bark();
	}
	cout << "Program ending..." << endl;
	return 0;
}

