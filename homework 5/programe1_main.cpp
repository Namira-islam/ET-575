#include <iostream>
using namespace std;
#include "program1_function.cpp"

int main() {
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s, t));
    return 0;
}
