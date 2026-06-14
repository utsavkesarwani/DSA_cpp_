// wap to print the fibonacci series 

// FIBONACCI SERIES it is a sequence of number where each number is sum of two preceding one .
// f(n)=f(n-1)+f(n-2)

#include <iostream>
using namespace std;
int main(){
    int n;
    int a=1,b=1;
    int sum=0;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b;
}