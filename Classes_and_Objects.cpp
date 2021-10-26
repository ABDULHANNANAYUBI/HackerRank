#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/**
    * Writing a class for the Calculate the score of the studens and compare
    * Defining a student class and save some values and data types like Arrays
    * Private the some values and public the function...
    * implement a function in scope resolation outside the class
*/

class Student {
private:
    int* Score = new int[5]; /// given the array as according the task...
public:
    void input(); /// Functions for calculate and getting input...
    int calculateTotalScore();

};

void Student::input() { /// Implement the input function...
    for (int i = 0; i < 5; i++) {
        cin >> Score[i];
    }
}

int Student::calculateTotalScore() { /// Implement the calculatescore function
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += Score[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    Student* s = new Student[n];  /// Making an objects of type student as dynamically

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore(); /// determining the first values as the instruction

    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    cout << count; /// printing the result

    return 0;
}
