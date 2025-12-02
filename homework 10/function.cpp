#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// -----------------------------------------------------
// Function 1: Display file contents
// -----------------------------------------------------
void displayFile(string filename) {
    ifstream infile(filename);
    string line;

    if (!infile) {
        cout << "Error opening file.\n";
        return;
    }

    cout << "Contents of the file:\n\n";

    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
}

// -----------------------------------------------------
// Function 2: Count total number of words in the file
// Write results to wordcounts.txt
// -----------------------------------------------------
int countWords(string filename) {
    ifstream infile(filename);
    ofstream outfile("wordcounts.txt");
    string word;
    int count = 0;

    if (!infile) {
        cout << "Error opening file.\n";
        return 0;
    }

    // Count each word
    while (infile >> word) {
        count++;
    }

    // Write required format
    outfile << "Namira Islam\n";
    outfile << "Total number of words: " << count << endl;

    infile.close();
    outfile.close();

    return count;
}

// -----------------------------------------------------
// Function 3: Count number of times "Earth" appears
// Append results to wordcounts.txt
// -----------------------------------------------------
int countEarth(string filename) {
    ifstream infile(filename);
    ofstream outfile("wordcounts.txt", ios::app); // APPEND mode
    string word;
    int count = 0;

    if (!infile) {
        cout << "Error opening file.\n";
        return 0;
    }

    while (infile >> word) {
        // Match EXACT word "Earth"
        if (word == "Earth" || word == "Earth," || word == "Earth." )
            count++;
    }

    outfile << "\nThe word 'Earth' appears " << count << " times in the document.\n";

    infile.close();
    outfile.close();

    return count;
}
