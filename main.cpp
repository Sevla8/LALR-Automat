#include <iostream>
#include "Automat/Automate.h"

using namespace std;

int main(int argc, char const *argv[]) {
	string input;
	cout << "Veuillez indiquer une phrase à analyser :" << endl;
	cin >> input;

	Automate automate(input);
	automate.analyse();

	return 0;
}
