// namira islam
// hw 4


#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "------------ Question 1 ------------" << endl;

    do {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 10) {
            cout << number << " is invalid! Please enter a number greater than 10: ";
            cin >> number;
        }
    } while (number < 10);

    cout << number << " is a valid number!" << endl;

int num1, num2, min, max;

    cout << "-------- Question 2 --------" << endl;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    // Determine min and max using if-else
    if (num1 < num2) {
        min = num1;
        max = num2;
    } else {
        min = num2;
        max = num1;
    }

    cout << "RESULT = ";
    for (int i = min; i <= max; i++) {
        cout << i << " ";
    }
    cout << endl;                                                 



// Global dimension




int dimension= 11;


    cout << "--------- Question 3 ---------" << endl;


   
        cout << "\n----- QUESTION:3 -----" << endl;
  

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if ((i == 2 && (j == 3 || j == 4)) ||
                ((i == 3 || i == 4) && j >= 3 && j <= 7) ||
                (i >= 5 && i <= 9 && (j == 3 || j == 4))) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}