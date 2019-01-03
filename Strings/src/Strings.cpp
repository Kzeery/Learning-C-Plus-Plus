#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int input;
	int points = 0;

	do {
		int num1 = rand() % 14;
		int num2 = rand() % 14;

		cout << "What is " << num1 << " * " << num2 << " ? > " << flush;

		cin >> input;

		if (input != num1 * num2 && input != 1000) {
			points--;
			cout << "You are stupid! You now have " << points
					<< " points! Try again (Enter 1000 to quit)" << endl;

		} else if (input == num1 * num2){
			points++;
			cout << "Correct! You are a genius! You now have " << points
					<< " points! Here's another one! (Enter 1000 to quit)" << endl;

		} if(input == 1000) {
			cout << "Quitting... " << endl;
			break;
		}
	} while (true);

	return 0;
}

