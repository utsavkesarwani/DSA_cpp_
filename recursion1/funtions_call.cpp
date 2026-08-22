#include<iostream>
using namespace std;
// void gun(){
//     cout<<"Hello CW"<<endl;

// }

// void fun(){
//     cout<<"Hello Utsav"<<endl;
//     gun();

//     // return means function khtm 
// }


void fun(int n){
    if(n==0) return;
    cout<<"Hello Utsav"<<endl;
    fun(n-1);
}

int main(){
    fun(3);
}