/*
OCT 22ND, 2025
Lab 11 Functions
namira islam

*/
#include <iostream>
using namespace std;

// void function does not return any value
void printhello(){
    cout<< "Hello Function!" << endl;
    return;
}

// void function with arguments
void greeting(string name){
    cout<<"Goodafternoon, "<< name << "!" << endl;
    return;
}
// Example 3: functions that returns an integer (whole num)
int returnfive(){
    return 5;
}
//Example4: Any code after the return will not be executed
void printsome(){
    cout<<"Something"<< endl;
    return;
    cout<<"After the return"<< endl;
}
int somenumber(){
    int num = 10;
    return num;
    num *= 2;
    return num;
    }

    //Example5: fucntion taht calculates 
    float areasquare(int side){
        float area = side * side;
        return area;
    }

    //eXAMPLE6:
    int product(int n1, int n2){
        return n1 * n2;

    }

    //Example7: function that calculates and return the farenheit temprature
    double fah(double celsius){
        return celsius *1.8 + 32;

    }

    void printfah(double f){
        cout<<"The farenheit temperature is : "<< f << endl;
    }

    // Example 8: check a number
    string checknumber(int number){
        if (number == 0){
            return "Zero";
        }
        else if (number > 0){
            return "Positive";
        }
        else {
            return "Negative";
        }

    }

    void printnumber(int x, string n ){
        cout<<"The number is" <<x<< "is" <<n<< endl;
    }
    
    // Exercise 


// Function 1: Check if a number is even
bool isEven(int num) {
    if (num % 2 == 0)
        return true;
    else
        return false;
}

// Function 2: Print the result
void printResult(int num, bool result) {
    cout << "Is " << num << " even? " << boolalpha << result << endl;
}

