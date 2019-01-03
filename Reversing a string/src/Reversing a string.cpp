#include <iostream>
using namespace std;

int main() {

	char text[] = "Yousif";
	int nChars = sizeof(text)-1;

	char *pStart = text;
	char *pEnd = text + nChars - 1;

	for(;pStart < pEnd; pStart++, pEnd--) {
		int save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;
	}

	cout << text << endl;

	return 0;
}
