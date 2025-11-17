#include<iostream>
using namespace std;

// ================= Example 1 =================
void pointer_ref(){
    int num = 12;
    char c = 'T';
    string n = "Peter";

    int* pointerint;
    char* pointerchar;
    string* pointerstring;

    cout<<"memory address of int "<<pointerint<<endl;

    pointerint = &num;
    pointerchar = &c;
    pointerstring = &n;

    cout<<"Reference value int = "<<pointerint<<endl;
    cout<<"Reference value char = "<<pointerchar<<endl;
    cout<<"Reference value string = "<<pointerstring<<endl;

    cout<<"Dereference value of int "<<*pointerint<<endl;
    cout<<"Dereference value of char "<<*pointerchar<<endl;
    cout<<"Dereference value of string "<<*pointerstring<<endl;
}

// ================= Example 2 =================
void printvalue(string v){
    cout<<"Value = "<<v<<endl;
    cout<<"inside printvalue function"<<endl;
}

void printbyreference(string& v){
    cout<<"Passed by reference = \t"<<v<<endl;
    v = "Updated sentence";
}

void printaddress(string* v){
    cout<<"Pass memory address = \t"<<v<<endl;
}

// ================= Example 3 =================
void arrays(){

    // initializing values to an array
    int age_children[3] = {12, 8, 5};
    cout<<"The 1st age = "<<age_children[0]<<endl;

    // array with initial values
    string names[]={"Annie","Peter","Carl","Charles","Brian"};
    cout<<"The fourth name is "<<names[3]<<endl;
}

// ================= Example 4 =================
void sizeofarrays(){

    cout<<"size of char \t"<<sizeof(char)<<endl;
    cout<<"size of int \t"<<sizeof(int)<<endl;
    cout<<"size of double \t"<<sizeof(double)<<endl;
    cout<<"size of string \t"<<sizeof(string)<<endl;

    int age_children[] = {12,8,5};
    cout<<"Total size of age_children \t"<<sizeof(age_children)<<endl;
    cout<<"Size of age_children \t"<<sizeof(age_children)/sizeof(age_children[0])<<endl;
}

// ================= Example 5 =================
void looparray(){
    string names[]={"Annie","Peter","Carl","Charles","Brian"};
    int sizenames = sizeof(names)/sizeof(names[0]);
    int counter = 0;

    for(int i = 0; i < sizenames; i++ ){
        cout<<names[i]<<"\t";
        if (names[i].length() >= 5){
            counter++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter<<" names with 5+ characters!"<<endl;
}

// ================= LAB EXERCISE =================
// Find maximum score in an array

void labexercise(){

    // given fixed array
    int scores[5];
    scores[0] = 60;
    scores[1] = 90;
    scores[2] = 75;
    scores[3] = 88;
    scores[4] = 100;

    int max = scores[0];

    // loop to find maximum
    for(int i = 1; i < 5; i++){
        if(scores[i] > max){
            max = scores[i];
        }
    }

    cout<<"The maximum score is "<<max<<endl;
}
