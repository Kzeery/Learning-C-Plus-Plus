
#include <iostream>
using namespace std;

class Test {
private:
	int id;
	static int count;
public:
	static int const MAX = 99;
	static void getInfo() {
		cout << count << endl;
	}
	Test() {
		id = ++count;
	}
	int getID() {
		return id;
	}

};
int Test::count = 0;
int main() {
	cout << Test::MAX << endl;
	Test::getInfo();

	Test test1;
	cout << test1.getID() << endl;


	return 0;
}
