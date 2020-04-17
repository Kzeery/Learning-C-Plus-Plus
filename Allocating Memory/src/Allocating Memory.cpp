
#include <iostream>
using namespace std;

class Candy {
private:
	string name;
public:
	Candy() {/*cout << "Candy created!" << endl;  */};
	Candy(const Candy& other): name(other.name) { cout << "Copy constructor initiated!" << endl; };
	~Candy() { /*cout << "Candy destroyed! :(" << endl; */ };
	void setName(string name) {this->name = name; };
	void speak() {cout << "This candy is: " << name << endl; };
};


int main() {


	Candy *pCandy = new Candy[26];
	char chara = 97;
	string onechar(1, chara);


	for(int i = 0; i<26; i++, chara++) {
		string onechar(1, chara);
		pCandy[i].setName(onechar);
		pCandy[i].speak();
	}

	delete [] pCandy;


	return 0;
}
