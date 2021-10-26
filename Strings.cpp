#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	/**
	* Writing a fuction for the string Excesize purpose...
	* Getting two string as an input...
	* printing the size of the input strings...
	* assigning the two input string into a one string...
	* Exchange the first letter of values...
	*/
	string first, second, third, fourth;
	char temp;
	getline(cin, first); /// Defining the Strings And Getting from user
	getline(cin, second);

	cout << first.size() << " " << second.size() << endl; /// Printing the size of the input string...
	third = first + second; /// Combining two string into one
	cout << third << endl;

	temp = first[0]; /// getting the first character of a string 
	first[0] = second[0];
	second[0] = temp;

	cout << first << " " << second << endl; /// printing the string after exchanging the first letter of the strings...


	return 0;
}