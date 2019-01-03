//============================================================================
// Name        : Copy.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person {
private:
	string name;
public:
	Person() {cout << "Person Created!" << endl; };
	Person(const Person& other): name(other.name) {cout << "Animal created by copying!" << endl;};
	~Person() { cout << "Destructor INITATED BABY" << endl; };
	void setName(string name) {this->name = name;};
	void speak() { cout << "My name is: " << name << endl; }
};

Person *createperson() {
	Person *pPerson1 = new Person;
	pPerson1->setName("Jiminy Billy Bob");
	return pPerson1;
}

int main() {
	Person *pPerson1 = createperson();
	pPerson1->speak();

	delete pPerson1;
	return 0;
}
