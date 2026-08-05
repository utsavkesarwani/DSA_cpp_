// wap to print the spiral matrix 

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows in matrix";
    int m;
    cin>>m;
    cout<<"Enter the number of column in matrix";
    int n;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

}