/* Homework 2: Branching 

Namira Islam

*/ 
// ---------------------- Program 1: Age eligibility ----------------------//
#include <iostream>
using namespace std;

int main() {
    int age;

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Check for invalid input
    if (age < 0 || age > 120) {
        cout << "Invalid age. Please enter a valid age." << endl;
    }
    // Check for age-based eligibility
    else if (age < 13) {
        cout << "Not eligible for any activities." << endl;
    }
    else if (age >= 13 && age <= 17) {
        cout << "Eligible for youth activities." << endl;
    }
    else if (age >= 18 && age <= 64) {
        cout << "Eligible for adult activities." << endl;
    }
    else { // age >= 65
        cout << "Eligible for senior activities." << endl;
    }
// ---------------- Program 2: Nested conditional-------------------// 
    int num1, num2, sum;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Main conditional logic
    if (sum < 0) {
        cout << "False alarm! The sum is " << sum << endl;
    }
    else if (sum >= 1 && sum <= 100) {
        // nested checks 
        if (sum % 5 == 0) {
            cout << sum << " is a pentagon" << endl;
        } else if (sum % 2 == 1) {
            cout << sum << " is an odd guess" << endl;
        }
        
    }
    else if (sum >= 101 && sum <= 200) {
        cout << "The new lucky number is " << sum << endl;
    }
    else if (sum >= 201 && sum <= 999) {
        cout << sum << " is a dreaming number" << endl;
    }
    else if (sum >= 1000) {
        // nested 
        if (sum >= 2000) {
            cout << sum << " approaches to the infinite and beyond!" << endl;
        } else if (sum % 2 == 0) {
            cout << sum << " approaches to the infinite evenly!" << endl;
        }
    }
 // ---------------- Program 3: temperature converter -------------------// 
    int choice;
    double temperature, result;

    // Display the menu
    cout << "Temperature Conversion Menu:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Kelvin to Celsius\n";
    cout << "4. Kelvin to Fahrenheit\n";
    cout << "5. Exit\n";
    cout << "Select an option (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            result = temperature * 9.0 / 5.0 + 32;
            cout << temperature << " Celsius is equal to " << result << " Fahrenheit" << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            result = (temperature - 32) * 5.0 / 9.0;
            cout << temperature << " Fahrenheit is equal to " << result << " Celsius" << endl;
            break;

        case 3:
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            result = temperature - 273.15;
            cout << temperature << " Kelvin is equal to " << result << " Celsius" << endl;
            break;

        case 4:
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            result = (temperature - 273.15) * 9.0 / 5.0 + 32;
            cout << temperature << " Kelvin is equal to " << result << " Fahrenheit" << endl;
            break;

        case 5:
            cout << "Exiting program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid selection. Please enter a number between 1 and 5." << endl;
            break;
    }  
    return 0;
}
             