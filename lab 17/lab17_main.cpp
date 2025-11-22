/*
namira islam
*/

#include<iostream>
#include "lab17_function.cpp"

using namespace std;

int main(){
    cout<<"\n --- example 1: array declaration ---"<<endl;
    array_dec();

    cout<<"\n --- example 2: print each value in a 2D array ---"<<endl;
    const int NUMCOLS = 5;
    int ar[3][NUMCOLS] = {
        {5, 10},
        {-2, -9},
        {6}
    };
    print2d(ar, 3);

    cout<<"\n --- example 3: populating an array with numbers ---"<<endl;
    int arr_num[2][3];
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    cout<<"\n --- example 4: sum of all numbers in a 2D array ---"<<endl;
    int s = sum_all(arr_num, 2, 3);
    cout<<"The total sum "<<s<<endl;

    cout<<"\n --- example 5: odd numbers in a 2D array ---"<<endl;
    int c = total_odd(arr_num, 2, 3);
    cout<<"Total odd numbers = "<<c<<endl;

    // ============ LAB EXERCISE ============
    char again;
    do {
        cout<<"\n --- example 6: LAB EXERCISE (3x4 random numbers + average) ---"<<endl;

        int lab_arr[3][4];                     // 3 rows, 4 columns
        populate_random(lab_arr, 3, 4);        // uses [4]
        print_array_lab(lab_arr, 3, 4);        // uses [4]

        double avg = average(lab_arr, 3, 4);   // uses [4]
        cout<<"Average = "<<avg<<endl;

        cout<<"\nAnother run? (y/n): ";
        cin>>again;
    } while(again == 'y' || again == 'Y');

    return 0;
}
