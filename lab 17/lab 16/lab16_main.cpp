/*
ANTERPREET KAUR
NOV 17TH, 2025
LAB16: ARRAY FUNCTIONS
MAIN FILE
*/

#include <iostream>
using namespace std;

#include "lab16.cpp"   // your professor did this instead of prototypes

int main()
{
    cout << "\n----- Example 1: collect and populate data into an array -----" << endl;
    // initialize variables and array
    int arraysize = 3;
    int arrnum[arraysize];

    // calling functions
    fillup(arraysize, arrnum);
    printarray(arraysize, arrnum);

    cout << "\n----- Example 2: program to search a number in an array -----" << endl;
    // initialize variables and array
    int arr_pos_numbers[ARRAY_SIZE];
    int listsize = 0;
    int targetnumber = 8;

    // calling functions
    fillarray(arr_pos_numbers, listsize);
    printarray(listsize, arr_pos_numbers);  // testing if collected
    int resultsearch = search(arr_pos_numbers, listsize, targetnumber);
    printresult(resultsearch, targetnumber);

    cout << "\n----- EXERCISE -----" << endl;
    // initialize variables and array
    int arr_number[] = {6, -10, 9, 12, -3, -8, 5, 7, -4, 0};
    int size = sizeof(arr_number) / sizeof(arr_number[0]);

    // calling exercise functions
    int sum_even = sumEven(arr_number, size);
    int count_negative = countNegative(arr_number, size);

    cout << "Sum of all even numbers in the array: " << sum_even << endl;
    cout << "Number of negative numbers in the array: " << count_negative << endl;

    return 0;
}
