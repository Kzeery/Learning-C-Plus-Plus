//============================================================================
// Name        : Variables.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string texts[8];
	texts[0] = "zero";
	texts[1] = "one";
	texts[2] = "two";
	texts[3] = "three";
	texts[4] = "four";
	texts[5] = "five";
	texts[6] = "six";
	texts[7] = "seven";

	string *pTexts = texts;

	for(int i=0; i < 8; i++) {
		cout << texts[i] << " " << flush;
	}

	return 0;
}
