#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str = "Raghav";
    // cout<<str.size();
    // cout<<endl;
    // cout<<str.length()<<endl;
    // str.push_back('e'); // only character can add in end 
    // cout<<str<<endl;

    // string s = "raghav";
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;

    // string st = "abc";
    // cout<<st<<endl;
    // st=st+"x";
    // cout<<st<<endl;


    string s = "abcdef";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}