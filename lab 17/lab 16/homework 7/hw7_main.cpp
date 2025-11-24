/*
NAMIRA ISLAM

*/

#include <iostream>
#include <cstdlib> // for rand()
#include <time.h>  // for time()
using namespace std;

#include "hw7.cpp"   // including function file instead of prototypes

int main()
{
    srand(time(0));  // initialize random number generator

    // collect the size of an array
    int num = collect_size();

    // declare an array with size num
    int a[num];

    // fill the array with random values
    populate_numbers(a, num);

    // print the array
    print_numbers(a, num);

    // display results
    cout << "Minimum number: \t" << array_min(a, num) << endl;
    cout << "Average of numbers: \t" << array_avg(a, num) << endl;

    return 0;
}
