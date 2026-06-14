// explanation of double pointer

#include<iostream>
using namespace std;
int main(){
    int x=3;
    int *ptr=&x;
    int **p=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    cout<<*p; // x ka address

}