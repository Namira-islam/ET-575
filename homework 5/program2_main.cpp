#include <iostream>
using namespace std;
#include "program2_function.cpp"

int main() {
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1, num2, num3);
    runProgram(num1, num2, num3, desc_order);
    return 0;
}
