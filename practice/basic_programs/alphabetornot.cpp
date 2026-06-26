// write a program to check whether a character is an alphabet or not.

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the number";
    // A to Z = 65 to 90 
    // a to z = 97 to 122
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        cout<<("The character is an alphabet");        
    }
    else{
        cout<<("The character is not alphabet");
    }
}