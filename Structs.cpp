#include<iostream>
#include<stdlib.h>
#include<algorithm>

#define size 51
using namespace std;
/**
	* Writing a function for the struct ex purpose ...
	* Defining the some variables as an int and string ...
	* Getting the values as an input and assagn as an object of the struct...
	* Defining the struct as a given commands from the tast
	*/
struct Student {
	int age;
	char first_name[size];
	char last_name[size];
	int standard;
};

int main() {

	Student st; /// Creating an object of type Student
	cin >> st.age >> st.first_name >> st.last_name >> st.standard;
	cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

	return 0;
}