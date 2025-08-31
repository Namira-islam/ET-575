//namira islam
// lab 3 
#include <iostream>
using namespace std;
int main(){
    int radius; //declaring radius saved as integer
    const double PI = 3.14159; // setting constant PI value
    float area = 0; // giving a default value of area
    cout<<" Enter the radius of the circle: ";
    cin>>radius;
    area = PI * radius*radius;
    cout<<" The area of the circle with radius of "<<radius<<" is "<<area;

    return 0;
}
