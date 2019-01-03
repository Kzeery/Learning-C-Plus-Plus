//============================================================================
// Name        : break-continue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/* for (int i = 0; i < 5; i++) {

		cout << "i is: " << i << endl;

		if (i == 3) {
			break;
		}

		cout << "Looping... " << endl;
	}

	cout << "Program quiting..." << endl; */

	for (int i = 0; i < 5; i++) {

			cout << "i is: " << i << endl;

			if (i == 3) {
				continue;
			}

			cout << "Looping... " << endl;
		}

		cout << "Program quiting..." << endl;
	return 0;
}
