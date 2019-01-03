
#include <iostream>
using namespace std;

class Test {
private:
	int id;
	static int count;
public:
	// Initialization of const must be done right here!
	static int const MAX = 99;
	Test() {
		id = ++count;
	}
	static void showInfo() {
		cout << count << endl;
	}
	int getId() {
		return id;
	}
};
int Test::count = 0;
int main() {
	cout << Test::MAX << endl;

	Test test1;
	cout << "Object 1 ID: " << test1.getId() << endl;
	Test test2;
	cout << "Object 2 ID: " << test2.getId() << endl;
	Test::showInfo();
	return 0;
}
