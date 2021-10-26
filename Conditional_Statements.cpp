#include<iostream>
#include<stdlib.h>
#include<istream>

using namespace std;

int main() {
	/**
	* Writing a conditonal statement according to a given question...
	* using cin.ignore in istream library but not work in Hackerrank library sistem...
	*/
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');/** *cin.ignore for ignoring the charecter which is given as \n in this code... */
	if (n > 9)
		cout << "Greater than 9" << endl;
	else {
		if (n == 1)
			cout << "one";
		else if (n == 2)
			cout << "two";
		else if (n == 3)
			cout << "three";
		else if (n == 4)
			cout << "four";
		else if (n == 5)
			cout << "five";
		else if (n == 6)
			cout << "six";
		else if (n == 7)
			cout << "seven";
		else if (n == 8)
			cout << "eight";
		else
			cout << "nine";
	}

	return 0;
}