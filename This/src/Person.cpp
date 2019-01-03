/*
 * Person.cpp
 *
 *  Created on: Dec. 23, 2018
 *      Author: Yousif
 */

#include "Person.h"
#include <sstream>
Person::Person() {


}
Person::Person(string name, int age) {
	this->name = name;
	this->age = age;

	cout << "Memory location of object: "<< this << endl;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;
	return ss.str();
}

