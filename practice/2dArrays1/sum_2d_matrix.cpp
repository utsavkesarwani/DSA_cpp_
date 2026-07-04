// wap to print the largest number in 2d array 


#include<iostream>
#include<climits>
using namespace std;
int main(){
    
    int m;
    cout<<"Enter the number of rows";
    cin>>m;
    int n;
    cout<<"Enter the number of columns";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // sum 
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<"Sum of all elements is "<<sum;
}