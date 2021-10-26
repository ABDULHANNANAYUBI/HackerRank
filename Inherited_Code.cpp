#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
/**
	* Writing the class for the BadLenghtException as an instruction ...
	* Defining some default @param inside the private of the class
	* using the defualt constructor and parameterized constructor...
	*/
class BadLengthException { /// Defining the classs
private:
	int n; /// @param
public:
	/// <Default Constructor>
	BadLengthException();
	/// <Parameterized Constructor>
	BadLengthException(int n);
	/// <Function of the class>
	int what();
};

BadLengthException::BadLengthException() {
	n = 0; /// Set the @n as Zero
}
BadLengthException::BadLengthException(int n) {
	this->n = n; /// Setting the n values to the given input value
}

int BadLengthException::what() {
	return n; /// Return the value number of the given input
}


bool checkUsername(string username) { /// using the function for the cheacking the instructions
	bool isValid = true;
	int n = username.length();
	if (n < 5) {
		throw BadLengthException(n);
	}
	for (int i = 0; i < n - 1; i++) {
		if (username[i] == 'w' && username[i + 1] == 'w') {
			isValid = false;
		}
	}
	return isValid; /// Returning the bool type value...
}

int main() {
	int T; cin >> T;/// Getting the input from user...
	while (T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username); /// calling the function
			if (isValid) {
				cout << "Valid" << '\n';
			}
			else {
				cout << "Invalid" << '\n';
			}
		}
		catch (BadLengthException e) { /// using try and catch blocks for cheack inputs...
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}