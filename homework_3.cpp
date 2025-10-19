/*  NAMIRA ISLAM
HOME WORK 3- FOR LOOPS
*/



#include <iostream>
using namespace std;

int main() {
    cout<<"------Program 1: Count positive, negative, and zero numbers-------\n";
    int number;
    int positive = 0, negative = 0, zero = 0;

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> number;
        if (number > 0)
            positive++;
        else if (number < 0)
            negative++;
        else
            zero++;
    }

    cout << "Total positive numbers = " << positive << endl;
    cout << "Total negative numbers = " << negative << endl;
    cout << "Total zeros = " << zero << endl;

    cout<<"-----Program 2: Calculate total and average daily sales----\n";
    int days;
    double sales, totalSales = 0.0;

    cout << "\nEnter the number of days: ";
    cin >> days;

    for (int i = 1; i <= days; i++) {
        cout << "Enter sales for day " << i << ": $";
        cin >> sales;
        totalSales += sales;
    }

    double averageSales = totalSales / days;

    cout << "\nTotal sales $ " << totalSales << " for " << days << " days." << endl;
    cout << "Average daily sales $ " << averageSales << endl;

    return 0;
}
