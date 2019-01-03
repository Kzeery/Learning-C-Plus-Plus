
#include <iostream>
using namespace std;

class Candy {
private:
	string name;
public:
	Candy() {cout << "Candy created!" << endl; };
	Candy(const Candy& other): name(other.name) { cout << "Copy constructor initiated!" << endl; };
	~Candy() {cout << "Candy destroyed! :(" << endl; };
	void setName(string name) {this->name = name; };
	void speak() {cout << "This candy is: " << name << endl; };
};
Candy *createCandy() {
	Candy *pSkittles = new Candy;
	pSkittles->setName("skittles");
	return pSkittles;
}


int main() {
	Candy *pCandy = createCandy();
	pCandy->speak();
	delete pCandy;


	return 0;
}
