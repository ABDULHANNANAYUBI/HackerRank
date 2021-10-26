#include<iostream>
#include<stdlib.h>

using namespace std;
/**
* Writing a function for a finding the max value of the given parameters..
* max_of_four function is used for getting four parameter and return the max value...
*/
int max_of_four(int a, int b, int c, int d) {
    if (a > b && a > c && a > d)
        return a;
    else if (b > a && b > c && b > d)
        return b;
    else if (c > a && c > b && c > d)
        return c;
    else
        return d;
}

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d; /// scanf_s if for only visual studio purpose...
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}