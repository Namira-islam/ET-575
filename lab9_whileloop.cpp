/*  NAMIRA ISLAM
OCT 14 , 2025
LAB9 WHILE LOOP*/
#include <iostream>
using namespace std;
int main()
{
    cout << "-----example 1 : while loop as a counter----- " << endl;
    // print from 1 to 5
    int n = 1;
    while (n <= 5)
    {
        cout << n << "\t";
        n++;
    }
    cout << "-----example 2 : while loop as a counter----- " << endl;
    // print from 3 to 0
    int m = 3;
    while (m >= 0)
    {
        cout << m << endl;
        m--;
    }
    cout << "-----example 3 : while loop as a decrement counter----- " << endl;
    m = 3;
    while (m-- >= 0)
    {
        cout << m << "\t";
    }
    cout << endl;
    cout << "-----example 4 : while loop as a decrement counter----- " << endl;

    m = 3;
    while (--m >= 0)
    {
        cout << m << "\t";
    }
    cout << endl;
    cout << "-----example 5 : while loop to validate the number----- " << endl;
    int num;
    cout << "enter a  number between 10 and 20 inclusive : ";
    cin >> num;
    // if the number is not between 10 and 20, use a while loop to recollect the number
    while (!(num >= 10 && num <= 20))
    {
        cout << "invalid. enter a number between 10 and 20 : ";
        cin >> num;
    }
    cout << " the entered number is " << num << endl;

    cout << "-----example 6 :do  while loop to validate the number----- " << endl;
    do
    {
        cout << "enter a  number between 10 and 20 inclusive : ";
        cin >> num;
    }

    while (!(num >= 10 && num <= 20));
    cout << "end of while loop. entered number = : " << num << endl;

    cout << "-----example 7 :do  while loop to validate the number----- " << endl;
    // do while to run the programme again
    // programme checks if the number is positive or negative or zero
    int number;
    char choice = 'y';

    do
    {
        cout << "enter a number : ";
        cin >> number;
        if (number == 0)
        {
            cout << "the number is zero" << endl;
        }
        else if (number > 0)
        {
            cout << "the number is positive" << endl;
        }
        else
        {
            cout << "the number is negative" << endl;
        }
        cout << "do you want to check another number ? (y/n) : ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "-----example 8 :do  while loop set to true----- " << endl;
    n = 0;
    int sum_positive = 0;
    do
    {
        cout << "enter a positive number : ";
        cin >> n;
        if (n >= 0)
        {
            sum_positive += n;
        }
        else
        {
            break;
        }
    } while (true);
    cout << "the total sum of positive number is " << sum_positive << endl;
    cout << "-----example 9 :do  while loop to withdrawr money from a bank account ----- " << endl;
    int balance = 1000;
    int w;
    while (true)
    {
        cout << "how much money you want to withdraw???? ";
        cin >> w;
        if (w > balance)
        {
            cout << "cant withdraw " << w << "enter another amount " << endl;
        }
        else
        {
            balance -= w;
            cout << "you withdraw $" << w << " and your remaining balance is " << balance << endl;
            break;
        }
    }

    cout << "thank you for banking with us" << endl;
    cout<<"\n-----example 10 : continue statement----- "<<endl;
// while loop to print , from 0 to 10, and add all the numbers except 5
int sum_all= 0;
int x = 0;
while(x++<10){
 
    if(x==5){
        continue;
    }
    sum_all+=x;
       cout<<x<<"\t";
}
cout<<"\nthe sum of all numbers except 5 is "<<sum_all<<endl;


cout<<"\n --------EXERCISE-----"<<endl;
 int number_ex, digit, sum;
    int totalSum = 0;

    //  while loop
    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> number_ex;

        if (number_ex == 0) {
            break;  // stop the loop when 0 is entered
        }

        sum = 0; // reset sum for each number

        // Calculate sum of digits
        int temp = number_ex;
        while (temp != 0) {
            digit = temp % 10;    // get last digit
            sum += digit;         // add digit to sum
            temp /= 10;           // remove last digit
        }

        cout << "The sum of digits is: " << sum << endl;

        // Add to total sum
        totalSum += sum;
    }

    cout << "The total sum is " << totalSum << endl;

    return 0;
}
