// wap to print the transpose of the matrix entered by the user and store it in a new matrix 

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row of matrix";
    cin>>m;
    int n;
    cout<<"Enter the column of matrix";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int arrT[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arrT[j][i]=arr[i][j];
        }
    }
    cout<<"Real matrix is "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }


    cout<<"Transpose of matrix is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arrT[i][j]<<" ";
        }
    cout<<endl;
    }

}