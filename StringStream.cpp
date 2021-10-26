#include<iostream>
#include<stdlib.h>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

/**
	* Writing a function for using the vectors Array list in Cpp
	* Getting string from user and pass as a paramter inside a function...
	* Change the String of digits into int vector(Array)...
	* Return the vector (Array list) Value from the function...
	*/

vector <int> parseInts(string str) {
	size_t lenght = std::count(str.begin(), str.end(), ',') + 1; /// Getting lenght of the str with saparate the comma(,)
	char ch;
	vector <int> value;
	stringstream s(str); /// using stringstream for the code...
	while (lenght > 0) {
		int temp;
		s >> temp;
		s >> ch;
		value.push_back(temp);
		lenght--;
	}
	return value;
}

int main() {

	string str;
	cin >> str;
	vector<int> integers = parseInts(str); /// Defining the Vector(Array List)
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n"; // printing the whole value inside the vector...
	}

	return 0;
}