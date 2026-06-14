// wap to print the minimum element of an array 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    // min value 

    int min = arr[0];
    for(int i=1;i<=n-1;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<"Minimum element in an array is "<<min;
}