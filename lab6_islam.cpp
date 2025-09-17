#include <iostream>
using namespace std;
int main(){
    cout << "------EXAMPLE 1 : NESTED CONDITIONAL STATEMENT -------" << endl;
    int n  = 5;
    if (n > 0){
        if (n % 2 == 0){
            cout << n << " is a positive even number" << endl;
        }
        else{
            cout << n << " is a positive odd number" << endl;
        }
    }
    else if (n < 0){
        if (n % 2 == 0){
            cout << "the number is a negative  and even number" << endl;
        }
        else{
            cout << " the number is negative and odd" << endl;
        }

    }
    else{
        cout << "the number is zero" << endl;
    }
    cout << "------EXAMPLE 2 : organize three numbers is decreasing order -------";
    // declare the identifiers
    int num1, num2, num3;
    //display message
    cout << "\nEnter three numbers: ";
    cin >> num1 >> num2 >> num3;
    // check if num1 is greaer than  num2 and num3
    if (num1 > num2 && num1 > num3){
        if(num2 > num3){
            cout << "The numbers in decreasing order are: " << num1 << ", " << num2 << ", " << num3 << endl;
        }
        else{
            cout << "The numbers in decreasing order are: " << num1 << ", " << num3 << ", " << num2 << endl;
        }
        cout << num1 << " is the largest number" << endl;
    }
    // check if num2 is greater than num1 and num3
    else if (num2 > num1 && num2 > num3){
        if(num1 > num3){
            cout << "The numbers in decreasing order are: " << num2 << ", " << num1 << ", " << num3 << endl;
        }
        else{
            cout << "The numbers in decreasing order are: " << num2 << ", " << num3 << ", " << num1 << endl;
        }
        cout << num2 << " is the largest number" << endl;
    }
    // check if num3 is greater than num1 and num2
    else if (num3 > num1 && num3 > num2){
        if(num1 > num2){
            cout << "The numbers in decreasing order are: " << num3 << ", " << num1 << ", " << num2 << endl;
        }
        else{
            cout << "The numbers in decreasing order are: " << num3 << ", " << num2 << ", " << num1 << endl;
        }
        cout << num3 << " is the largest number" << endl;
    }
    else{
        cout << "The numbers are equal" << endl;
    }
    cout<< "------EXAMPLE 3 : switch -------" << endl;
    // select a day off from the week
    int dayoff;
    cout << "select a day off : " << endl;
        
    cout << "1. Monday" << endl;
    cout << "2. Tuesday" << endl;
    cout << "3. Wednesday" << endl;
    cout << "4. Thursday" << endl;
    cout << "5. Friday" << endl;
    cin >> dayoff;
    switch(dayoff){
        case 1:
        cout<< " YOUR ARE OFF ON MONDAY" << endl;
        break;
        case 2:
        cout<< " YOUR ARE OFF ON TUESDAY" << endl;
        break;
        case 3:
        cout<< " YOUR ARE OFF ON WEDNESDAY" << endl;
        break;
        case 4:
        cout<< " YOUR ARE OFF ON THURSDAY" << endl;
        break;
        case 5:
        cout<< " YOUR ARE OFF ON FRIDAY" << endl;
        break;
        default:
        cout<< "UNABLE TO READ THE DAY OFF" << endl;
        break;
    }
 cout << "------EXAMPLE 4 : switch to select a gender -------" << endl;
 char gender;
    cout << "SELECT YOUR GENDER : " << endl;
    cout <<     " M or m for male " << endl;
    cout <<     " F or f for FEMALE " << endl;
    cout <<     " O or o for OTHER " << endl;
    cin >>gender;
    switch(gender){
        case 'M':
        case 'm':
        cout<< " gender = male " << endl;
        break;
        case 'F':
        case 'f':
        cout<< " gender = female " << endl;
        break;
        case 'O':
        case 'o':
        cout << " gender = other " << endl;
        break;
        default:
        cout<< " gender = undefined " << endl;
        break;
    }
    cout << "------EXERCISE 1 : NESTED CONDITIONAL STATEMENT -------" << endl;
    
    double amount ;
cout << "Enter the amount of money you have saved: ";
cin >> amount;

if (amount < 0) {
cout << "Have some savings!" << endl;
}
else if (amount < 200000) {
cout << "Keep saving!" << endl;
}
else {
// ====== Nested IF for 200k – 500k ======
if (amount >= 200000 && amount <= 500000) {
cout <<" With $ "<<amount<< " You can afford an Apartment or Co-op." << endl;

if (amount <= 300000) {
cout << "with $ "<<amount<< " Studio" << endl;
}
else if (amount <= 400000) {
cout <<"with $ "<<amount<< " You can afford 1 BR + 1 Bath" << endl;
}
else { // 400001 – 500000
cout <<"with $ "<<amount<< " You can afford 2 BRs + 1 Bath" << endl;
}
}
else {
// ====== Nested IF for 500k – 1M ======
if (amount > 500000 && amount <= 1000000) {

if (amount <= 700000) {
cout << "with $ "<<amount<<" You can afford 2 BRs + 2 Baths" << endl;
}
else { // 700001 – 1,000,000
cout << "with $ "<<amount<<" You can afford 3 BRs + 3 Baths" << endl;
}
}
else {
// Above 1M
cout <<"with $ "<<amount<< " You can afford a Mansion!" << endl;
}
}
}
    cout << "------EXERCISE 2 : SWITCH STATEMENT -------" << endl;
char choice;
int number;

// Step 1: ask user for a number
cout << "Enter a number: ";
cin >> number;

// Step 2: ask if they want to double it
cout << "Do you want to double the number? (Y/N): ";
cin >> choice;

// Step 3: use switch-case
switch (choice) {
case 'Y':
case 'y':
number = number * 2;
break;

case 'N':
case 'n':
// keep the number as is
break;

default:
// for invalid input, reset to zero
number = 0;
break;
}

// Step 4: output result
cout << "The number is set to " << number << endl;

    return 0;
}