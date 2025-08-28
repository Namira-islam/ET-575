// Namira Islam 
// lab 1
#include <iostream>
using namespace std;
int main(){
    string country;
    char gender;
    char percentage;
    int zipcode;
    double rate;
    cout<<"Enter the name of your country:\n";
    cin>> country;
    cout<<"Enter your gender:\n";
    cin>>gender;
    cout<<"Enter your zipcode:\n";
    cin>>zipcode;
    cout<<"Enter the tax rates:\n";
    cin>> rate;
    cout<<"Entered country: "<< country;
    cout<<"\nSelected gender: "<< gender;
    cout<<"\nZip code: "<< zipcode;
    cout<<"\nTax rate: "<< rate<<"%";

    return 0;
}