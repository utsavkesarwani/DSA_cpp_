// print good morning n numbers of times take input n from users 

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    fun(n-1);
}


int main(){
    int n;
    cout<<"Enter number of times u want to print the text";
    cin>>n;
    fun(n);

}