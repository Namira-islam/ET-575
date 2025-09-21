/*
   Name: Namira Islam
   Lab Exercise: Simple Calculator using switch-case
*/

#include <iostream>   
using namespace std; 

int main() {
     int a;        
   int b;        
    char sign;    // operator symbol (+, -, *, /, %, q)
    int result;   

    // ask user for first number
    cout << " Enter the first number : ";
    cin >> a;

    // ask user for second number
    cout << "Enter the second number: ";
    cin >> b;

    // ask user for the operation
    cout << "Choose an operator (+, -, *, /, %, q to quit): ";
    cin >> sign;

    // switch-case to perform calculation
    switch (sign) {
        case '+':  // if user typed +
            result = a + b;
            cout << "Result: " << a << " + " << b << " = " << result << endl;
            break;

        case '-':  // if user typed -
            result = a - b;
            cout << "Result: " << a << " - " << b << " = " << result << endl;
            break;

        case '*':  // if user typed *
            result = a * b;
            cout << "Result: " << a << " * " << b << " = " << result << endl;
            break;

        case '/':  // if user typed /
            if (b == 0) { // check for divide by zero
                cout << "Error: Division by zero not allowed." << endl;
            } else {
                // since a and b are int, result will also be int division
                result = a / b;
                cout << "Result: " << a << " / " << b << " = " << result << endl;
            }
            break;

        case '%':  // if user typed %
            if (b == 0) { // modulus by zero check
                cout << "Error: Modulus by zero not allowed." << endl;
            } else {
                result = a % b;
                cout << "Result: " << a << " % " << b << " = " << result << endl;
            }
            break;

        case 'q':  
            cout << "Quitting program." << endl;
            break;

        default:  
            cout << "Invalid response. Please type again." << endl;
    }

    return 0; 
}
