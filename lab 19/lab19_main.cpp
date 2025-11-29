
#include <iostream>
#include <string>
#include "lab19_functions.cpp"

using namespace std;

int main() {

    cout << "\n------ Example 1: console input failure -----" << endl;
    checknumber();

    cout << "\n------ Example 2: console input failure in loop -----" << endl;
    cout << validatenumber() << endl;

    cout << "\n------ Example 3: reading a file -----" << endl;
    readfile("samplefile.txt");

    cout << "\n------ Example 4: writing content into a file -----" << endl;
    writefile("outputfile.txt");

    cout << "\n------ Example 5: append data into a file -----" << endl;
    appendfile("samplefile.txt");

    // Lab Exercise:
    cout << "\n------ EXERCISE -----" << endl;

    create_user_file();

    append_user_message("This is an appended message from the exercise!");

    read_user_file("data_user.txt");

    return 0;
}
