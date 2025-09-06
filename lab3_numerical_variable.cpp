//Namira islam
#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"ENTER THE FIRST NUMBER: ";
    cin>>a;
cout<<"ENTER THE SECOND NUMBER: ";
cin>>b;
//Arithmetic Operations:
cout<<"▬▬▬▬▬Arithmetic Operations▬▬▬▬▬ \n";
cout<<" a+b : "<<a+b<<endl;
cout<<" a-b : "<<a-b<<endl;
cout<<" a*b : "<<a*b<<endl;
cout<<" a/b : "<<a/b<<endl;
cout<<" a%b : "<<a%b<<endl;
cout<<"▬▬▬▬▬Assignment Operations:▬▬▬▬▬\n ";
  // Assignment Operations
    a += 10;
    b -= 5;
    cout << "▬▬▬▬▬ Assignment Operations ▬▬▬▬▬\n";
    cout << "a incremented by 10: " << a << endl;
    cout << "b decremented by 5: " << b << endl;
      // Boolean (Logical) Operations
    cout << "▬▬▬▬▬ Boolean (Logical) Operations ▬▬▬▬▬\n";
    cout << "Is a greater than b? " << (a > b ? "True" : "False") << endl;
    cout << "Is a equal to b? " << (a == b ? "True" : "False") << endl;
    cout << "Is a not equal to b? " << (a != b ? "True" : "False") << endl;
    cout << "Are both a and b positive numbers? " << ((a > 0 && b > 0) ? "True" : "False") << endl;
    cout << "Is either a or b a negative number? " << ((a < 0 || b < 0) ? "True" : "False") << endl;
    cout << "Is a not greater than b? " << (!(a > b) ? "True" : "False") << endl;
    return 0;
}