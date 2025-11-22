/*
namira islam
*/

#include<iostream>
using namespace std;

// example 1
void array_dec(){
    int array[3][5]={{5,10},{-2,-9},{6}};
    cout<<"3rd element in the second row "<<array[1][2]<<endl;
}

// example 2
const int NUMCOLS = 5;
void print2d(int a[][NUMCOLS], int rowsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < NUMCOLS; col++){
            cout<<a[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// example 3
void populate_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            int n;
            cout<<"Enter a number: ";
            cin>>n;
            arr[row][col] = n;
        }
    }
}

void print_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

// example 4
int sum_all(int arr[][3], int rowsize, int colsize){
    int sum = 0;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            sum += arr[row][col];
        }
    }
    return sum;
}

// example 5
int total_odd(int arr[][3], int rowsize, int colsize){
    int counter_odd = 0;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            if(arr[row][col] % 2 != 0)
                counter_odd++;
        }
    }
    return counter_odd;
}

// ============ LAB EXERCISE FUNCTIONS (3x4) ============

// populate with random (0–100)
void populate_random(int arr[][4], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            arr[row][col] = rand() % 101;     // 0–100
        }
    }
}

// print 3x4 array
void print_array_lab(int arr[][4], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

// compute average
double average(int arr[][4], int rowsize, int colsize){
    int sum = 0;
    int count = rowsize * colsize;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            sum += arr[row][col];
        }
    }
    return (double)sum / count;
}
