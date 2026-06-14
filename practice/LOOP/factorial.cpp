// print the factorial of a given number n

#include<iostream>  // # tell the compiler to do something before the compilation starts 
// include tell the program to take the content of another file and paste it at the top of the code 
// iostream is stands for input / output stream 
// iostream is a standard library . 
using namespace std;  // it tell the compiler to use the standard namespaces
int main(){
    cout<<"Enter a number";
    int n,f=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    cout<<f;

}