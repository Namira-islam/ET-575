
/*namira islam 
lab 8 
foor loop
*/

#include <iostream>
using namespace std;


int main(){
    cout<<"\n ----------Example 1: for loop ------------"<<endl;
    //PRINT "Hello" 5 TIMES
    for (int action=1; action<=5; action++){
        cout<<"Hello"<<action<<endl;

    }
    cout<<"\n ----------Example 2: for loop as a decrement counter------------"<<endl;
    // PRINT FROM 9 TO 1
    int n = 9;
    for (n; n>=1; n--){
        cout<<n<<"\t"<<endl;
    }
    cout<<endl;

    cout<<"\n ----------Example 3: for loop as an increment counter with ddifferent steps:  ------------"<<endl;
    // PRINT 1-20 IN A STEP OF 3
    for (int m = 1;  m<=20; m+=3){
        cout<<m<<"\t"<<endl;
    }
    cout<<endl;

    cout<<"\n ----------Example 4: for loop with conditional statement  ------------"<<endl;
    //PRINT ALL THE NUMBERS, BETWEEN -10 AND 10, THAT ARE MULTIPLE OF 3
    for (int p = -10; p<=10; p++){
        if (p%3==0 && p!=0)
            cout<<p<<"\t";
    }

    cout<<"\n ----------Example 5: for loop with conditional statement  ------------"<<endl;
    //COUNT ALL EVEN NUMBERS BETWEEN 5 AND 20
    int even_count = 0;
    for( int e = 5; e<=20; e++) {
        if (e%2==0 && e!=0){
            even_count ++;

        }
    }
    //PRINT RESULTS
    cout<<"There is/are \t" <<even_count<<"\t even numbers"<<endl;

    cout<<"\n ----------Example 6: for loop with conditional statement  ------------"<<endl;
    //ADD ALL THE NUMBER BETWEEN -8 ND 5
    int sum_negative =0;
    int x=-8;
    for (x; x<=5; x++){
        if (x<0){
            sum_negative +=x;
        }
    }
    //PRINT RESULTS:
    cout<<"The total sum of negative umbers = "<<sum_negative<<endl;

    /* ----------------------------------------------- */

    cout<<"\n ----------EXERCISE 1:------------"<<endl;
    // print from 21 to -21
    int count_multiplesof_2 = 0;

    for (int i = 21; i >= -21; i -= 5) {
        cout << i << "\t";
        if (i % 2 == 0) {
            count_multiplesof_2++;
        }
    }

    
    cout<< endl<< "There are " << count_multiplesof_2 << " numbers that are multiples of 2." << endl;
   
    
    cout<<"\n ----------EXERCISE 2:------------"<<endl;

    int start_value;
    cout<< "input the starting value:";
    cin>>start_value;
    cout<< "Counting from " <<start_value<<" upto 30 (step = +4):"<<endl;

    for(int i = start_value; i<=30;  i+=4){
        cout<<i<<"\t";
    }
    cout<<endl;





return 0;
}