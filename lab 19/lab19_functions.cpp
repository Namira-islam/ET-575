/*
namira islam
Lab 19, files and console input
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


// Example 1: console input failure (single try)
void checknumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (cin.fail()) {
        cout << "Error! input mismatched data type!" << endl;
    } else {
        cout << "Entered number = " << num << endl;
    }

    cin.clear();
    cin.ignore(10000, '\n');

    cout << "END OF FUNCTION. Number = "<<num << endl;

}
// Example 2: console input failure with loop
float validatenumber() {
    float n;
    bool isNotValid = false;
    do {
        cout << "Enter a number: ";
        cin >> n;

        isNotValid = cin.fail();
        cin.clear();
        cin.ignore(10000, '\n');
    }
    while (isNotValid);

    return n;
}
// Example 3: set object for input & output files
ifstream fin;
ofstream fout;
void readfile(string filename) {
    fin.open(filename);

string line;
int linecounter = 1;
while (getline(fin, line)) {
        cout << "Line " << linecounter << "\t" << line << endl;
        linecounter++;
    }

    fin.close();
}
// Example 4: writing a file (overwrite)
void writefile(string filename) {
    fout.open(filename);
//write some content
for (int n = 1; n <= 3; n++) {
    fout << "Good morning " << n << endl;
    }

    fout.close();
}
// Example 5: append data into a file
void appendfile(string filename) {
fout.open(filename, ios::app);
//append
fout << "\n----- APPEND -----" << endl;
for (int n = 3; n > 0; n--) {
        fout << n << endl;
    }
// write a single line
fout << "GAME OVER!" << endl;
//close the file
fout.close();
}
// ====================== EXERCISE PART ========================
// 1) Create the file data_user.txt
void create_user_file() {
    ofstream fout;

    fout.open("data_user.txt");
    fout << "This is my output file – Type your full name.\n";
    fout.close();
}
// 2) Append a new message
void append_user_message(string msg) {
    ofstream fout;

    fout.open("data_user.txt", ios::app);
    fout << msg << endl;
    fout.close();
}
// 3) Read a file passed in as argument
void read_user_file(string filename) {
    ifstream fin;
    fin.open(filename);

    if (!fin) {
        cout << "Error opening file!" << endl;
        return;
    }

    string line;
    int count = 1;

    while (getline(fin, line)) {
        cout << "Line " << count << ": " << line << endl;
        count++;
    }

    fin.close();
}