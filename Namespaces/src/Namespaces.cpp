#include <iostream>
using namespace std;
#include "Cat.h"
#include "Animals.h"
using namespace ygk;

int main() {
	Cat cat;
	cat.speak();
	ygk::Cat cat2;
	cat2.speak();

	cats::Cat cat3;
	cat3.speak();

	cout << ygk::CATNAME << endl;
	cout << cats::CATNAME << endl;
	cout << CATNAME << endl;
	return 0;
}
