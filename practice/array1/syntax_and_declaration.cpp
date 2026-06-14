#include<iostream>
using namespace std;
int main(){
    int arr[7]; //0 1 2 3 4 5 6   this is declaration 
// this is initialisation 
    // arr[0]=7;
    // arr[1]=1;
    // arr[2]=3;
    // arr[3]=5;
    // arr[4]=6;
    // arr[5]=7;
    // arr[6]=7;
    // // 
    // arr[7]=8;


    // int arr[7]={1,2,3,4,5,6,7};
// this is another way of initialisation 
    // cout<<arr[0];

// input 
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }

// output 
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }


}