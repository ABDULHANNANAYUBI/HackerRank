#include<iostream>
#include<stdlib.h>

using namespace std;
/**
* Writing a function for pointer according to given question in task..
* Update funtion gets two int parameter as pointer...
* Define a temporary sum and sub parameters and get the values...
* Complete all wanted tast and return the adress of the values...
*/
void update(int* a, int* b) {
	int sum = *a + *b;
	int sub = *a - *b;
	if (sub < 0) sub *= -1;
	*a = sum;
	*b = sub;
}

int main() {

	int a, b;
	int* pa = &a, * pb = &b;

	cin >> a >> b; /// getting the values...
	update(pa, pb); /// calling the function...
	printf("%d\n%d", a, b); /// printing the values to console...


	return 0;
}