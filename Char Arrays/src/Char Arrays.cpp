
#include <iostream>
using namespace std;

int main() {

	char text[] = "hello ";

	for(unsigned int i = 0; i<(sizeof(text) - 1); i++) {
		cout << i << ": " << text[i] << " " << endl;
	}

	int k  = 0;

	while (true) {
		if(text[k] == 0) {
			break;
		}
		cout << k << ": " << text[k] << endl;
		k++;

	}


	return 0;
}
