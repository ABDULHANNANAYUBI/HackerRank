#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/**
    * Writing a function for the reversing printing of the array...
    * Write the whole function in main...
    * Getting Array Elements from user and allocate the dynamic array ...
    * printing the array and define two variables...
    * from help of the variable exchange the places of the values inside the array...
*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int* Arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> Arr[i];
    }
    int first = 0, last = n - 1;
    while (first < last) {
        int temp = Arr[first];
        Arr[first] = Arr[last];
        Arr[last] = temp;
        first++;
        last--;
    }
    for (int i = 0; i < n; i++)
        cout << Arr[i] << " ";

    delete Arr;
    return 0;
}
