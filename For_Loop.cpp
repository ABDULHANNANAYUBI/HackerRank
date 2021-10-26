#include <iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    /**
    * writing function for the loop according to the given question in site
    * in this problem we write a numarical form of english launguage according to given values...
    */
    for (int n = a; n <= b; n++) {
        if (n <= 9) {
            if (n == 1)
                cout << "one\n";
            else if (n == 2)
                cout << "two\n";
            else if (n == 3)
                cout << "three\n";
            else if (n == 4)
                cout << "four\n";
            else if (n == 5)
                cout << "five\n";
            else if (n == 6)
                cout << "six\n";
            else if (n == 7)
                cout << "seven\n";
            else if (n == 8)
                cout << "eight\n";
            else
                cout << "nine\n";
        }
        else if (n > 9 && n % 2 == 0) /** * first given coditions */
            cout << "even\n";
        else if (n > 9 && n % 2 == 1)/** * Second given coditions */
            cout << "odd\n";
    }
    return 0;
}
