//namira islam
//lab2
#include <iostream>
using namespace std;
int main(){
   
    cout<<"\n-----example1 : arithmetic operator----- "<<endl;
   //calculate the height  of free failing object
   //free fall=0.5*gravity*time *time
   //declare a contant variable named gravity
   const float GRAVITY = 9.8;
   //declare a constant variable height and time
   float height =0, time=0;
   //collect the falling time 
   cout<<"enter a failling time in sec: ";
   cin>>time;
   //calcutale the height of a free fall obj
   height= 0.5*GRAVITY*time*time;
   cout<<" the height of a free fall obj at"<<time<<"sec is "<<height<<"meters\n";

    cout<<"example 2 : assignment operator\n";
    int num1 = 10;
    int num2 = 3;
    cout<<"original number1= "<<num1<<"\n";
    num1 ++;
    cout<<"orignal number2"<<num2<<endl;
    num2--;
    cout<<"updated num2 :"<<num2<<endl;
    num2+=5;
    cout<<"updated num2 by 5 : "<<num2<<endl;
    num1 *=2;
    cout<<"updated number1 using 2 = "<<num1<<"\n";
    cout<<" The remainder of "<<num1<<" and "<<num2<<"is "<<num1%num2;
    cout<<"num1 = "<<num1<<endl;
     cout<<"num2 = "<<num2<<endl;
     num1 %= num2;
 cout<<"num1 = "<<num1<<endl;
  cout<<"num2 = "<<num2<<endl;
cout<<"\n-----example 3 : comparison operator----- "<<endl;
cout<<"is num1 equal to num2 ?? "<< (num1 ==num2)<<endl;
    cout<<"is num1  greater than num2?? "<<(num1>num2)<<endl;
    cout<<" is num1  less than num2?? "<<(num1<num2)<<endl;
    cout<<" is num1  equal than num2?? "<<(num1!=num2)<<endl;
    cout<<"\n-----example 4 : logical operator----- "<<endl;
    // and operator
    bool check_num = (num1!=num2)&&(num1<num2)&&(num1>5);
    cout<<"the result of check num is  "<<check_num<<endl;
    //OR operator
    bool check_or = (num2>0)||(num2!=3)||(num2<num1);
    cout<<" the result of check or is " << check_or<<endl;
    cout<<"\n-----example 5 : casting----- "<<endl;
    int n = 5;
    float m =n/2.0 ;
    cout<<"implicit casting =  "<<m<<endl;
    return 0;
  
}