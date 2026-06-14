// Given an array, predict if the array contains duplicates or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool hasDuplicate = false;
    int duplicateValue = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                hasDuplicate = true;
                duplicateValue = arr[i];
                break;
            }
        }
        if(hasDuplicate) break;
    }

    if(hasDuplicate)
        cout<<"Duplicate found: "<<duplicateValue;
    else
        cout<<"No duplicate found.";
}
