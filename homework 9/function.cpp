// lab9_functions.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// -------------------------------------------------------
// Function 1: arraysize() 
// -------------------------------------------------------
int arraysize() {
    int size;

    cout << "Enter an array size between 1 and 100: ";
    cin >> size;

    while (size < 1 || size > 100) {
        cout << "Invalid input. Enter an array size between 1 and 100: ";
        cin >> size;
    }

    return size;
}

// -------------------------------------------------------
// Function 2: randPopulate() 
// Populates array with random nums between 10 and 30
// -------------------------------------------------------
void randPopulate(int arr[], int size) {
    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = 10 + rand() % 21;  // generates 10–30
    }
}

// -------------------------------------------------------
// Function 3: print()
// Displays each value in array
// -------------------------------------------------------
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// -------------------------------------------------------
// Function 4: reverse()
// Swaps front with last, second with second-last, etc.
// -------------------------------------------------------
void reverse(int arr[], int size) {

    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
