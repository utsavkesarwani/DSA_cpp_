//find the maximum value out of all the elelments in the array 

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
    // find the max value

    // int max=arr[0];   
    // this is the method in which we put a max value as first element of an array 
    int max=INT_MIN;  // It represents the smallest value that can be stored in a signed int.
    for(int i=1;i<=n-1;i++){
        if(max < arr[i]) max=arr[i];
    }

    cout<<"maximum number is "<<max;
}