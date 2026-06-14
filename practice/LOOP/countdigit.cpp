// wap to count the number of digits a number have.

#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number ";
    cin>>n;
    int a=n;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) cout<<"The number of digit in a number is 1";
    else cout<<"The number of digit in a number is "<<count;
}