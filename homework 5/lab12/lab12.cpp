/*
Lab 12: scoping, and predefined functions
namira islam
*/

#include<iostream>
#include<cmath>
using namespace std;

// example 1: function that calculates and returns the sum of two numbers
int add(int num1, int num2) {
    int sum = num1 + num2;  // sum is a local variable in function add
    cout << "the sum in function add() is \t" << sum << endl;
    return sum;
}

// example 3: c++ predefined functions
// function passes two arguments, calculates and returns the hypotenuse
float hyp(float side1, float side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// function to print result
void printhyp(float s1, float s2, float h) {
    cout << "The hypotenuse of side " << s1 << " and " << s2 << " is " << h << endl;
}

// ----------------------------------------------------
// EXERCISE SECTION
// ----------------------------------------------------

// 1. Function to collect and return a number greater than zero
float getNumber() {
    float num;
    cout << "Enter a number greater than 0: ";
    cin >> num;

    // loop to validate number
    while (num <= 0) {
        cout << "Invalid! Please enter a number greater than 0: ";
        cin >> num;
    }
    return num;
}

// 2. Function to calculate and return the distance of two points
float calcDistance(float x1, float y1, float x2, float y2) {
    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;
}

// 3. Function to print the result
void printDistance(float x1, float y1, float x2, float y2, float distance) {
    cout << "The distance of points (" << x1 << ", " << y1 << ") and ("
         << x2 << ", " << y2 << ") is " << distance << endl;
}
