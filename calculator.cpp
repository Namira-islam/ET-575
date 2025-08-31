#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double a;
   double b;
  char sign;
  double result = 0;
  cout<<" Enter #1: ";
  cin>>a;
  cout<<"Enter #2: ";
  cin>>b;
  cout<<" Type any of the operators(+,-,*,/): ";
  cin>>sign;
  switch(sign){
      case'+' : result= a +b ;
      cout<<result;
      break;
      case '-': result = a -b;
      cout<<result;
      break;
      case '*': result = a * b ;
      cout<<result;
      break;
      case '/': result= a/b;
      cout<<result;
       break;
      default:
      cout<<"Invalid respond . please type again ";
  }
    

    return 0;
}