/* namira islam */

#include <iostream>


using namespace std;

//function to collect the size of an array 
int collect_size(){  
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // make sure size is valid
    while (size <= 0){
        cout << "Size must be greater than 0. Enter again: ";
        cin >> size;
    }
    return size;
}

//function to populate an array 
void populate_numbers(int ar[], int s){ 
    // use loop to RANDOMLY generate numbers between 1 and 99
    for (int i = 0; i < s; i++){
        ar[i] = rand() % 99 + 1;
    }
}

//function to print all numbers in an array 
void print_numbers(int ar[], int s){ 
    cout << "Array elements: ";
    for (int i = 0; i < s; i++){
        cout << ar[i] << "\t";
    }
    cout << endl;
}

//function to find the minimum number in an array 
int array_min(int ar[], int s){
    int min = ar[0];
    for (int i = 1; i < s; i++){
        if (ar[i] < min){
            min = ar[i];
        }
    }
    return min;
}

//function to return the average of all numbers in an array 
float array_avg(int ar[], int s){
    int sum = 0;
    for (int i = 0; i < s; i++){
        sum += ar[i];
    }
    return (sum * 1.0) / s;  // beginner style (not using static_cast)
}
