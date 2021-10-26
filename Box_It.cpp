#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;
/**
	* Writing a Class as a Box ...
	* Class have some values & some function
	* @lenght , @breadth , @height are parameters of the class
	* Function are determine as an instruction
	* Getter and Setter funtion
	* Operator overloading
	* a) Printing
	* b) Comparing
	*/
class Box {
private:
	int lenght, breadth, height; /// The parameters of the Class
public:
	/// <Constructor>
	Box();
	Box(int lenght, int breath, int height);
	Box(Box&);
	/// <Getter Methods...>
	int getLenght();
	int getBreadth();
	int getHeight();
	/// <Functions>
	long long CalculateVolume();
	/// <Operator Overloading>
	/// <Operator Overloading (Comparing)>
	friend bool operator < (Box& A, Box& B);
	/// <Operator Overloading (Printing)>
	friend ostream& operator <<(ostream& out, Box& B);
};

Box::Box() { /// Default constructor...
	lenght = breadth = height = 0;
}
Box::Box(int lenght, int breadth, int height) {
	this->lenght = lenght;
	this->breadth = breadth;
	this->height = height;
}

Box::Box(Box& B) {
	lenght = B.lenght;
	breadth = B.breadth;
	height = B.height;
}

int Box::getLenght() {
	return lenght;
}

int Box::getBreadth() {
	return breadth;
}

int Box::getHeight() {
	return height;
}

long long Box::CalculateVolume() { /// İmplement the function 
	return (long long)lenght * breadth * height;
}

bool operator < (Box& A, Box& B) { /// Operator overloading as a comparing the function
	if (A.lenght < B.lenght)
		return true;
	else if (A.breadth < B.breadth && (A.lenght == B.lenght))
		return true;
	else if (A.height < B.height && A.breadth == B.breadth && A.lenght == B.lenght)
		return true;
	else
		return false;
}

ostream& operator << (ostream& out, Box& B) { /// Operator overloading for the printing 
	out << B.getLenght() << " " << B.getBreadth() << " " << B.getHeight();
	return out;
}

void check2() /// Test function for the written class...
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}

int main() {
	/// <Calling the cheack2 function and use it to test the written class>
	check2();

	return 0;
}