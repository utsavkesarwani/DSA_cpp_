// wap to check whether a given character have a vowel or a consonant.

// write a program to check whether a character is an alphabet or not.

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character";
    // A to Z = 65 to 90 
    // a to z = 97 to 122
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"Character is a vowel";
        }
    else{
        cout<<"Charcter is consonant";
    }
    }
    else{
        cout<<("The character is not alphabet");
    }
}