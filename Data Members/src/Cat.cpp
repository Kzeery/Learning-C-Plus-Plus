/*
 * Cat.cpp
 *
 *  Created on: Dec. 22, 2018
 *      Author: Yousif
 */
#include <iostream>
#include "Cat.h"
using namespace std;
void Cat::speak() {
	if(happy) {
		cout << "Meouw!" << endl;
	} else {
		cout << "Sssssss!" << endl;
	}
}
void Cat::makeHappy() {
	happy = true;
}
void Cat::makeSad() {
	happy = false;
}
