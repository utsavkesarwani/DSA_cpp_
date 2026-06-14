// wap to print a reverse of a number 

// algorithm  1.r*=10;  2.last digit  3.r=r+l;  4.n/=10 ; 

#include<iostream>
using namespace std;
int main(){
    int n,r=0,l=0;
    cout<<"Enter a number";
    cin>>n;
    while(n>0){
        r=r*10;
        l=n%10;
        n/=10;
        r=r+l;
        
    }
    cout<<r;
}