#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s = "abcdef";
    // // s.substr(index)
    // // s.substr(index,length)
    // // cout<<s.substr(2);
    // cout<<s.substr(2,4);
    // input a string of even length and return the seconde half of that string using inbuilt substr function 


    string str;
    cout<<"Enter a string";
    cin>>str;
    // getline(cin,str);
    // cin>>str;u
    int n = str.length();
    cout<<str.substr(n/2);

    
}