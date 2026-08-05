// you are given a matrix / 2d array of size (nxn). Change this matrix into its transpose.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of square matrix";
    cin>>n;
    cout<<"Enter the elements of matrix";
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<endl;
    //print 
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // problem with upar wala code is it only print the transpose of the matrix but it does not change the matrix 

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }


    cout<<"Changed matrix is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}