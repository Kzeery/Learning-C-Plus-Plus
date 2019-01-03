//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string texts[] = { "one", "two", "three", "four", "five" };

	string *pTexts = texts;

	 for(int i=0; i<5; i++) {
	 cout << pTexts[i] << " " << flush;
	 }

	 cout << endl;

	 for(int i = 0; i < 8; i++, pTexts++) {
	 cout << *pTexts << " " << flush;
	 }
	 cout << endl;

	string *pElement = &texts[0];
	string *pEnd = &texts[4];

	while (pElement <= pEnd){
		cout << *pElement << " " << flush;

		pElement++;
	}
	return 0;
}
