// lab18_function.cpp
#include <iostream>
using namespace std;

// collects up to maxSize non-zero integers
// returns how many numbers were stored
int collectnumber(int numbers[], int maxSize)
{
    int count = 0;
    int value;

    cout << "Enter up to " << maxSize << " non-zero integers." << endl;
    cout << "Enter 0 to stop." << endl;

    while (count < maxSize)
    {
        cout << "Enter number " << (count + 1) << ": ";
        cin >> value;

        if (value == 0)   // sentinel value
        {
            break;
        }

        numbers[count] = value;
        count++;
    }

    return count;
}

// computes and returns the average of the numbers in the array
double Averagenumber(int numbers[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + numbers[i];
    }

    double average = static_cast<double>(sum) / size;
    return average;
}

// returns the number that is closest to the average
int Closestmean(int numbers[], int size, double average)
{
    int closest = numbers[0];

    double bestDiff = average - numbers[0];
    if (bestDiff < 0)
    {
        bestDiff = -bestDiff;
    }

    for (int i = 1; i < size; i++)
    {
        double currentDiff = average - numbers[i];
        if (currentDiff < 0)
        {
            currentDiff = -currentDiff;
        }

        if (currentDiff < bestDiff)
        {
            bestDiff = currentDiff;
            closest = numbers[i];
        }
    }

    return closest;
}

// prints the final message
void Printresult(double average, int closest)
{
    cout << "The closest number to average " << average
         << " is " << closest << "." << endl;
}
