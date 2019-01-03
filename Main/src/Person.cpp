/*
 * Person.cpp
 *
 *  Created on: Dec. 23, 2018
 *      Author: Yousif
 */

#include "Person.h"
#include <sstream>

string Person::toString() {
	stringstream ss;

	ss << "Name : ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

