#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    // int *ptr = arr;f // giving address
    // int *ptr = &arr;  this will give an errror
    int *ptr = &arr[0];
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr[4];
    // ptr[3]=78;
    for(int i=0;i<=4;i++){
        // cout<<ptr[i]<<" ";
        // cout<<i[ptr]<<" ";
        cout<<i[arr]<<" ";
    }
    cout<<endl;
    *ptr = 8; // ptr[0]=8;
    ptr++; // ptr is pointing to 2nd element
    *ptr = 9;  
    ptr--; // ptr is pointing to first element 
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
}