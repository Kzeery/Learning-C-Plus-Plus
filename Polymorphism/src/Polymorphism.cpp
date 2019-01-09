
#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "???????" << endl;
	}
	virtual ~Animal() {};

};

class Cat: public Animal {
public:
	virtual void speak()=0;

	virtual ~Cat() {};
};

class HouseCat: public Cat {
public:
	virtual void speak() {
		cout << "Meeoouuww" << endl;
	}
	virtual ~HouseCat() {}

};

int main() {

	Animal *pAnimal = new HouseCat;

	pAnimal->speak();

	delete pAnimal;


	return 0;
}
