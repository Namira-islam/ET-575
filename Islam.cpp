/*

Homework 1: strings, string methods, and numerical variables

Student's Name: Namira Islam

*/
//  ACTIVITY 1
#include <iostream>
using namespace std;
int main(){
    //STEP 1
    string a = "Welcome to" ;
    string b = " New York City ";

    //STEP 2
    string name = "";
    cout<<" Please Type Your Name :  ";
    cin>>name;

    //STEP 3
    string concat = a + b + name;

    //STEP 4
    cout<<"\nConcatenated message : "<< concat <<endl;

    //STEP 5
    int msg_length = concat.length();
    cout <<"Message length: "<< msg_length<<endl;
     
    //STEP 6
    int index = concat.find("ma");
     
    //STEP 7
    concat.replace(index, 2, "%---%");

     // Step 8
    cout << "\n------------------------------ RESULT ACTIVITY 1 ----------------------------\n\n";
    cout << "concatenated message:\t" << concat << endl;
    cout << "Message length:\t\t" << msg_length<< endl;
    cout << "Index of character 'ma':\t" << index << endl;
    cout << "Replace 'ma' with %---%:\t" <<concat << endl;
    // Activity 2
    // Step 1: constant pi
const float PI = 3.14159;

// Step 2: input radius and height
float radius, height;
cout << "Enter radius: ";
cin >> radius;
cout << "Enter height: ";
cin >> height;

// Step 3: radius > height
bool greater = (radius > height);

// Step 4: radius == height
bool equal = (radius == height);

// Step 5: triple height and increase radius by 5
height *= 3;
radius += 5;

// Step 6: radius != height AND radius > height
bool check = (radius != height) && (radius > height);

// Step 7: calculate volume
float volume = PI * radius * radius * height;

// Step 8: output results with \t
cout << "\n---------------- RESULT ACTIVITY 2 ----------------\n\n";
cout << "Is the radius greater than height?:\t" << greater << endl;
cout << "Is the radius equal to height :\t" << equal << endl;
cout << "Triple height :\t" << radius << endl;
cout << "AIncreased radius by 5 :\t" << height << endl;
cout << "Is the radius not equal to and greater than height ? :\t" << check << endl;
cout << "The volume of a right cylinder with radius 14.8cm and height 25.5cm is : \t" << volume << endl;

    return 0;
}