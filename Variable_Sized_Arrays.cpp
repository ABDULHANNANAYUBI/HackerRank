#include<iostream>
#include<stdlib.h>

using namespace std;

/**
	* Writing a code for using 2d array using dynamic memory allocation
	* Writing a code for the variable sized arrays ...
	* Getting Quaries as input and give a output...
*/

int main() {

	int a = 0, b;
	cin >> a >> b;
	/// For Creating the variable sized arrays
	int** Arr = new int* [a];
	for (int i = 0; i < a; i++) {
		int n;
		cin >> n;
		Arr[i] = new int[n];
		for (int j = 0; j < n; j++)
			cin >> Arr[i][j];
	}
	/// For Quaries
	for (int i = 0; i < b; i++) {
		int x, y;
		cin >> x >> y;
		cout << Arr[x][y] << endl;
	}
	return 0;
}