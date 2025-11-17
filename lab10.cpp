//namira islam

#include <iostream>
using namespace std;
int main()
{
  cout<<"\n----- Example 1 : nested loops -----"<<endl;
    //each run of the outer loop , one complete cycle of an inner loop is run
    int i = 0;
    while (i <3){
        cout<<"outer loop "<<i;
        int j = 1;
        while (j<=5){
            cout<<"\tinner loop "<<j;
            j++; 
        }
        cout<<endl;
        i++;
    
    cout<<"\n----- Example 2 : cinema seating grid -----"<<endl;
    int user_row;
    int seats;
    cout<<"Enter the number of rows:";
    cin>>user_row;
    cout<<"Enter the number of seats:";
    cin>>seats;

    for(int row = 1; row<=user_row; row++){
        for (int s=1; s<=seats; s++)
        cout<<" Row ="<<row;
        cout<<"  Seat ="<<s<<"\t";
      cout<<"\n";
    }
   

    cout<<"\n----- Example 3 : 2d graphing -----"<<endl;
    int dimension = 9;
    for (int row =1; row<=dimension ; row++){
        for (int col= 1; col<=dimension; col++){
            if (col==5 || row==5)
                cout<<" x ";
            else 
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n----- Example 4 : H graph -----"<<endl;
    dimension = 10;
    for (int row =1; row<=dimension ; row++){
        for (int col= 1; col<=dimension; col++)
        {
            if ((4 >= col && col>=3 && 8>=row && row>=3) || (col >= 5 && col<=6 && row>=5 && row <=6) || (col >=7 && col<=8 && row >= 3 && row<=8))
                cout<<" % ";
            else 
                cout<<" . ";
        }
        cout<<endl;
    }
   
   
   
   
   
   
   
   
   
   
   
   
   
    }












    return 0;

 
}