// wap to add two matrices 

#include<iostream>
using namespace std; 
int main(){
    int m;
    cout<<"Enter the rows of matrix";
    cin>>m;
    int n;
    cout<<"Enter the column of matrix";
    cin>>n;
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }

    int p;
    cout<<"Enter the rows of matrix";
    cin>>p;
    int q;
    cout<<"Enter the column of matrix";
    cin>>q;
    int arr2[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr2[i][j];
        }
    }

    // first condition is 
    // both the matrics must have same dimension 
    int arr[m][n];
    if(m==p & p==q){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
    
    // print 

    cout<<"The addition of two matrics is"<<endl;
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }
    }
    else{
        cout<<"Order of matrices are not same";

    }
}