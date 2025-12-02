#include <iostream>
#include <fstream>
#include <string>
#include "function.cpp"
using namespace std;

void displayFile(string filename);
int countWords(string filename);
int countEarth(string filename);

int main() {

    string filename = "Remembering_Earth.txt";

    // 1. Display file content
    displayFile(filename);

    // 2. Count total number of words and write to wordcounts.txt
    int totalWords = countWords(filename);

    // 3. Count number of times "Earth" appears and append to file
    int earthCount = countEarth(filename);

    cout << "\nProgram complete. Check 'wordcounts.txt'.\n";

    return 0;
}
