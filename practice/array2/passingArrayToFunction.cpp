#include<iostream>
using namespace std;
void display(int a[] , int size){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}

void change (int b[], int size){
    b[2]=101;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // accessing the element of another function 
    // updation , pass by value/ reference ? 
    display(arr,size);
    change(arr, size);
    display(arr,size);
    cout<<&arr<<endl;
    cout<<arr<<endl;
    cout<<arr[0];
}