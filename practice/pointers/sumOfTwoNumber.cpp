// wap to print the sum of two number using pointers

#include<iostream>
using namespace std;
int main(){
    // int x=8;
    // int y=9;
    // // cout<<x+y;
    // int *p=&x;
    // int *q=&y;
    // int z=*p+*q;
    // cout<<z;

    int x,y;
    int *p=&x;
    int *q=&y;
    cout<<"Enter first number";
    cin>>*p;
    cout<<"Enter second number";
    cin>>*q;
    cout<<*p+*q;
}