/*
 * Person.cpp
 *
 *  Created on: Dec. 22, 2018
 *      Author: Yousif
 */
#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	name = "George";

}

string Person::toString() {
	return "Person's name is: " + name;
}

void Person::setName(string newName) {
	name = newName;
}

string Person::getName() {
	return name;
}
