/*
NAMIRA ISLAM

*/

#include <iostream>
using namespace std;

const int ROWCOL_ARRAY = 4;

// Function to search for a value in a 2D array
// Saves row and column position into position[0] and position[1]
// If not found → store -1, -1
void searchValue(int ar[][ROWCOL_ARRAY], int value, int position[]) {
    bool found = false;

    for (int r = 0; r < ROWCOL_ARRAY; r++) {
        for (int c = 0; c < ROWCOL_ARRAY; c++) {
            if (ar[r][c] == value) {
                position[0] = r;  // row index
                position[1] = c;  // column index
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        position[0] = -1;
        position[1] = -1;
    }
}

// Function to display message based on search result
void displayMessage(int value, int position[]) {
    if (position[0] == -1) {
        cout << "Number " << value << " was not found." << endl;
    }
    else {
        cout << "Number " << value << " was found in row "
             << position[0] << " and column " << position[1] << "." << endl;
    }
}

int main() {
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int value;
    int position[2];

    cout << "Enter a number to search in the 4x4 array: ";
    cin >> value;

    // call function to search a value
    searchValue(ar, value, position);

    // call function to display a message
    displayMessage(value, position);

    return 0;
}
