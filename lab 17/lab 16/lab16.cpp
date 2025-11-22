/*
namira islam
*/

#include <iostream>
using namespace std;

// Example 1: basic fill & print

void fillup(int sizearray, int arr[])
{
    for(int i = 0; i < sizearray; i++){
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    cout<<endl;
}

void printarray(int sizearray, int arr[])
{
    for(int i = 0; i < sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// Example 2: collect positive numbers (max 10)

const int ARRAY_SIZE = 10;

void fillarray(int *arr, int &numberuserindex)
{
    int number, index = 0;

    do{
        cout<<"Enter a positive number: ";
        cin>>number;

        if(number > 0){
            arr[index] = number;
            index++;
        }
    }while(number > 0 && index < ARRAY_SIZE);

    numberuserindex = index;
}

// Search for a target number
int search(const int *arr, int numberuserindex, int target)
{
    int index = 0;
    bool found = false;

    while(!found && (index < numberuserindex)){
        if(target == arr[index])
            found = true;
        else
            index++;
    }

    if(found)
        return index;
    else
        return -1;
}

// Print result of search
void printresult(int resultsearch, int target)
{
    cout << "Is " << target << " in the array? " << resultsearch << endl;
}

//// ================= LAB EXERCISE =================

// 1) Sum of all even numbers
int sumEven(const int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

// 2) Count all negative numbers
int countNegative(const int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < 0)
            count++;
    }
    return count;
}
