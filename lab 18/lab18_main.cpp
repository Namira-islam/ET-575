// lab18_islam.cpp
#include <iostream>
#include "lab18_function.cpp"  
using namespace std;

// function prototypes
int collectnumber(int numbers[], int maxSize);
double Averagenumber(int numbers[], int size);
int Closestmean(int numbers[], int size, double average);
void Printresult(double average, int closest);

int main()
{
    const int MAX_SIZE = 5;
    int numbers[MAX_SIZE];

    int size = collectnumber(numbers, MAX_SIZE);

    if (size == 0)
    {
        cout << "No numbers were entered." << endl;
        return 0;
    }

    double average = Averagenumber(numbers, size);
    int closest = Closestmean(numbers, size, average);
    Printresult(average, closest);

    return 0;
}
