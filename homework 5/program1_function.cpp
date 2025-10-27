#include <iostream>
#include <cmath>   // for sqrt()
using namespace std;

int speed() {
    int s;
    cout << "Enter wind speed (1–99 m/s): ";
    cin >> s;

    while (s <= 0 || s >= 100) {
        cout << "Invalid. Enter again (1–99): ";
        cin >> s;
    }
    return s;
}

float temp() {
    float t;
    cout << "Enter temperature (between -90 and 10 °C): ";
    cin >> t;

    while (t > 10 || t <= -90) {
        cout << "Invalid. Enter again (-90 < temp <= 10): ";
        cin >> t;
    }
    return t;
}

double windspeed(int v, float tem) {
    double sv = sqrt(v);      // no need to cast
    double wci = 13.12 + 0.6215 * tem - 13.956 * sv + 0.4867 * tem * sv;
    return wci;
}

void prompt_result(double wci) {
    cout << "The wind index is: " << wci << endl;
}
