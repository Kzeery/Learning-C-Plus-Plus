//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int NSTRINGS = 5;

	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

	string *pTexts = texts;

	pTexts++;

	cout << *pTexts << endl;

	pTexts--;

	cout << *pTexts << endl;

	string *pEnd = &texts[NSTRINGS];

	while(pTexts != pEnd) {
		cout << *pTexts << " " << flush;
		pTexts++;
	}
	cout << endl;

	pTexts -= 5;
	long elements = (long)(pEnd - pTexts);

	cout << elements << endl;


	pTexts = &texts[0];

	pTexts += NSTRINGS/2;
	cout << *pTexts << endl;



	return 0;
}
