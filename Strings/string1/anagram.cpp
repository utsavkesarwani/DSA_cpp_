#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter first string";
    getline(cin,s);
    cout<<"Enter second string";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;
    if(s==t){
        cout<<"It is anagram";
    }
    else{
        cout<<"It is not anagram";
    }
}