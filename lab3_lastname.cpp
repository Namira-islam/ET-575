#include <iostream>
using namespace std;
int main(){
    cout << " ------EXAMPLE 1 :  STRING INDEXING-------" << endl;
    string first_name = " Namira ";
 cout << "  The 3rd character = " << first_name[2]<< endl;
  cout << "  The 1st character = " << first_name.at(0)<< endl;
  cout << " ------EXAMPLE 2 :   AMOUNT OF CHARACTER IN A STRING -------" << endl;
  int character = first_name.length();
  cout << "there is " << character <<" characters in" << first_name << endl;
  cout << " ------EXAMPLE 3 :  CONCATENATE CHARACTERS IN A STRING ------" << endl;
    string last_name = " Islam ";
    string username =" 212004";
    cout << "concatenated word" << first_name+last_name+username<< endl;
    cout << " ------EXAMPLE 4 :  SUBSTRACTING CHARACTERS IN A STRING-------" << endl;
    string msg = "I am a student of computer science";
    //extract 5 characters from the 3rd character 
    string sub_char = msg.substr(2,5);
    cout << "subtracted characters = " << sub_char << endl;
    cout << " ------EXAMPLE 5 :   INSERTING CHARACTER IN A STRING -------" << endl;
    //insert the word maybe
    msg.insert(5,"maybe ");
    cout << "after inserting = " << msg << endl;
    cout << " ------EXAMPLE 6 :   INSERTING CHARACTER TO THE END OF A STRING -------"<< endl;
    msg.append(" and I love programming");
    cout << "after appending = " << msg << endl;
    cout << " ------EXAMPLE 7 :   REPLACING CHARACTER IN A STRING -------   "<< endl;
    msg.replace(2,2,"was");
    cout << "after replacing = " << msg << endl;
    cout << " ------EXAMPLE 8 :   ERASE CHARACTER IN A STRING -------   "<< endl;
    // erase the word maybe
    msg.erase(5,6);
    cout << "after erasing = " << msg << endl;
    cout << " ------EXAMPLE 9 :   FINDING A CHARACTER IN A STRING -------   "<< endl;
    int position = msg.find("computer");
    cout << "the position of the word computer is = " << position << endl;
   cout << " ------EXERCISE-------" << endl;
  string word;
   cout << "Enter a word : ";
  getline(cin, word);
  cout << "The 2nd character of the word is : " << word.at(1) << endl;
  cout << "The length of the word is : " << word.length() << endl;
  string replaced_word = word;
  replaced_word.replace(2, 2, "-- $ --");
  cout << "After replacing 2 chars from 3rd character: " << replaced_word << endl;
  string removed_word = word;
  removed_word.erase(word.length() - 3, 3);
  cout << "After removing 3 chars from the end: " << removed_word << endl;
    return 0;
}