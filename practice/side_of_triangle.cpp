// wap to take 3 input and tell they can be the side of a triangle
// logic is sum of two side is greater than third side 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first side of triangles";
    cin>>a;
    cout<<"Enter second side of triangle";
    cin>>b;
    cout<<"Enter third side of triangle";
    cin>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<"They can be side of triangle";
    }
    else{
        cout<<a<<b<<c<<"They can't be side of triangle";
    }
}
