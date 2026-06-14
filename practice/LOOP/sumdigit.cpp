// wap to print the sum of digit of a given number 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int a; 
    int sum=0;
    while(n>0){
        a=n%10;
        n/=10;
        sum=sum+a;
    }
    cout<<"The sum of the digit of number is "<<sum;
}