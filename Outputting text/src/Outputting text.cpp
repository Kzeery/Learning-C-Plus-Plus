#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int input;
	while (true) {

		int num1 = rand() % 10;
		int num2 = rand() % 10;

		do {

			cout << "What is  " << num1 << " * " << num2 << " ? > " << flush;

			cin >> input;

			if (input != num1 * num2) {
				cout << "You are stupid! Try again" << endl;
			}
		} while (input != num1 * num2);

		cout << "Correct! You are a genius! Here's another one!" << endl;

	}
	return 0;
}
