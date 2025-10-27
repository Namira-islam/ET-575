#include <iostream>
using namespace std;

int collectNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

// Return 1 if numbers are in descending order, otherwise 0
int inOrder(int a, int b, int c) {
    if (a > b && b > c)
        return 1;
    else
        return 0;
}

void runProgram(int num1, int num2, int num3, int desc_order) {
    if (desc_order == 1)
        cout << "They are in descending order." << endl;
    else
        cout << "They are NOT in descending order." << endl;

    char again;
    cout << "Run again? (y/n): ";
    cin >> again;

    while (again == 'y' || again == 'Y') {
        num1 = collectNumber();
        num2 = collectNumber();
        num3 = collectNumber();
        desc_order = inOrder(num1, num2, num3);

        if (desc_order == 1)
            cout << "They are in descending order." << endl;
        else
            cout << "They are NOT in descending order." << endl;

        cout << "Run again? (y/n): ";
        cin >> again;
    }

    cout << "Goodbye!" << endl;
}
