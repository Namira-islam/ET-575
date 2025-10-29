/*
    Lab 13: Function - Random Variables
 Namira Islam
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// EX1: RANDOM NUMBER
int rnd1() {
    return rand();
}

// EX2: DIFFERENT RANDOM NUMBER
int rnd2() {
    srand(time(0));
    return rand();
}

// EX3: RANGE 0–9
int rnd0_9() {
    return rand() % 10;
}

// EX4: RANGE -10 TO 5
int rndN10_5() {
    return -10 + rand() % 16;
}

// EXERCISE: DICE (1–6)
int dice() {
    return 1 + rand() % 6;
}

// Compare if both are 1
bool same1(int a, int b) {
    return (a == 1 && b == 1);
}

// Show result
void show(bool ok) {
    if (ok)
        cout << "Congrats Namira! Snake eyes!" << endl;
    else
        cout << "Try again, Namira!" << endl;
}
