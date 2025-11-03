#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
/* namira islam */
int rand_side() {
    return 1 + rand() % 20;
}

double hyp(int side1, int side2) {
    double result = sqrt(pow(side1, 2) + pow(side2, 2));
    return result;
}

void print_result(int side1, int side2, double hypotenuse) {
    cout << fixed << setprecision(2);
    cout << "The hypotenuse of a right angle with side "
         << side1 << " and " << side2
         << " is = " << hypotenuse << endl;
}

int main() {
    srand(time(0));
    int side1 = rand_side();
    int side2 = rand_side();
    double h = hyp(side1, side2);
    print_result(side1, side2, h);
    return 0;
}
