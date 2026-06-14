// take 3 positive integer as input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the values of x y z";
    cin>>x,y,z;
    if(x>y && x>z){
        cout<<"x is the greatest of all three";
    }
    else if(y>x && y>z){
        cout<<"y is the greatest of all three";
    }
    else if(z>x && z>y){
        cout<<"z is the greatest of all three";
    }
    else{
        cout<<"wrong input";
    }
}