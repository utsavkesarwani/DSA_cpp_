#include<iostream>
using namespace std;
int main(){
    // int x=1;
    // int* ptr=&x;
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr<<endl;

    // bool flag=true;
    // bool* ptr=&flag;
    // cout<<ptr<<endl;
    // // ptr=ptr+1;
    // ptr++;
    // cout<<ptr<<endl;
    // cout<<x;

    int x=4;
    int*ptr=&x;
    cout<<*ptr<<endl;
    // *ptr=*ptr+1;
    // *ptr++; // it always said to write *ptr in bracket 
    (*ptr)++;
    cout<<*ptr<<endl;

}