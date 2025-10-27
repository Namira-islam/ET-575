/*
Lab 12: scoping, and predefined functions
namira islam
*/

#include<iostream>
using namespace std;

// global variable
int num = 8;

void doSomething() {
    // global variable
    num = -20;
    cout << "\nNum in doSomething function: " << num << endl;
}

#include "lab12.cpp"

int main() {

    cout << "\n-------- example 1: local variables --------" << endl;
    int sum = add(3,7) + add(1,6);   // sum is local variable in main
    cout << "The total sum in main() is \t" << sum << endl;

    cout << "\n-------- example 2: global variables --------" << endl;
    cout << "num original value = \t" << num << endl;
    doSomething();
    num = 5;
    cout << "num in main function = \t" << num << endl;

    cout << "\n-------- example 3: hypotenuse --------" << endl;
    float s1 = 2;
    float s2 = 3;
    float h = hyp(s1, s2);
    printhyp(s1, s2, h);

    cout << "\n-------- EXERCISE --------" << endl;

   
    float x1 = getNumber();
    float y1 = getNumber();
    float x2 = getNumber();
    float y2 = getNumber();

    float dist = calcDistance(x1, y1, x2, y2);
    printDistance(x1, y1, x2, y2, dist);

    return 0;
}
