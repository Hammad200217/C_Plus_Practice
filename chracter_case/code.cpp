#include <iostream>

using namespace std;
 
int main(){
 char ch;
 cout<<"Enter the character"<<endl;
 cin>> ch;
 if(ch>='a' && ch<='z') // check if the character is in lowercase
 {
    cout<<"Characters are in lowercase "<<endl;
 } 
 else // check if the character is in uppercase
 {
    cout<< " Characters are in uppercase"<<endl;
 }

    return 0;
 }