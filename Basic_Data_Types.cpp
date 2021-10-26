#include <iostream>
#include <cstdio>
#include<stdlib.h>

using namespace std;

int main() {

    /**
    * Writing the function about the Data types in cpp...
    * using stdin and stdout for this purpose...
    * printing the values to console by using printf function...
    */

    int val;
    long long int longval;
    char ch;
    float floatval;
    double doubleval;
    cin >> val >> longval >> ch >> floatval >> doubleval;
    printf("%d\n", val);
    printf("%lld\n", longval);
    printf("%c\n", ch);
    printf("%.2f\n", floatval);
    printf("%.5lf\n", doubleval);
    return 0;
}