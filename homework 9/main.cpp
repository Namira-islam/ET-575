// lab9_islam.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "function.cpp"
using namespace std;

int arraysize();
void randPopulate(int arr[], int size);
void print(int arr[], int size);
void reverse(int arr[], int size);

int main() {

    int sizearray = arraysize();        // Get array size
    int noise[sizearray];               // Create array with that size

    randPopulate(noise, sizearray);     // Populate with random nums

    cout << "Original set:" << endl;
    print(noise, sizearray);

    reverse(noise, sizearray);          // Reverse the array

    cout << endl << "Reversed set:" << endl;
    print(noise, sizearray);

    return 0;
}
