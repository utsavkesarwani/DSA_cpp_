// wap to count the numner of elements in gicen array greater than a given number x 
#include<iostream>
using namespace std;
int main(){
    int x,n;
    int arr[n];
    cout<<"Enter the size of an array ";
    cin>>n;
    cout<<"Enter the elements of an array ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number from where u want to count the greater numbers "<<endl;

    cin>>x;
    int count = 0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }

    cout<<"The number of element greater than "<<x<<" is "<<count;
}