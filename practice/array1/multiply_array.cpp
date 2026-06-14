// Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int multi=1;
    for(int i=0;i<=n-1;i++){
        multi=arr[i]*multi;
    }
    cout<<"Product of all the element of array is ";
    cout<<multi;
}