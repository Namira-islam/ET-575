/*
    Lab 13: Main - Random Variables
   Namira Islam
    Date: Oct 27th, 2025
*/

#include <iostream>
#include "lab13_function.cpp"
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    cout << "\n--- EX1: RANDOM VAR ---" << endl;
    int r1 = rnd1();
    cout << "Random: " << r1 << endl;

    cout << "\n--- EX2: DIFF RANDOM ---" << endl;
    int r2 = rnd2();
    cout << "Different Random: " << r2 << endl;

    cout << "\n--- EX3: RANGE 0–9 ---" << endl;
    int r3 = rnd0_9();
    cout << "Number between 0 and 9: " << r3 << endl;

    cout << "\n--- EX4: RANGE -10 TO 5 ---" << endl;
    int r4 = rndN10_5();
    cout << "Number between -10 and 5: " << r4 << endl;

    cout << "\n--- EXERCISE: DICE ---" << endl;
    int d1 = dice();
    int d2 = dice();
    cout << "Dice 1: " << d1 << " | Dice 2: " << d2 << endl;

    // check for snake eyes
    bool win = same1(d1, d2);

    // show result
    show(win);

    return 0;
}
