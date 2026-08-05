// wap to print the matrix in wave form 

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

    // row wave form 
    // for(int i=0;i<m;i++){
    //     if(i%2==0){
    //         for(int j=0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }

    //     else{ // i=1,3,5
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    // cout<<endl;
    // }

    cout<<endl;

    // for(int i=m-1;i>=0;i--){
    //     if(i%2==0){
    //         for(int j=0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }

    //     else{ // i=1,3,5
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    // cout<<endl;
    // }


    
    // for(int i=0;i<m;i++){
    //     if(i%2!=0){
    //         for(int j=0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }

    //     else{ // i=1,3,5
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j]<<" ";
    //         }
        // }
    // cout<<endl;
    // }

    // column wave form 
    //   wave form staring from first  column moving towards second  columns then third columns 
    for(int j=0;j<n;j++){
        if(j%2!=0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }

        else{ // i=1,3,5
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    cout<<endl;
    }


    // // column wave form 
    // for(int j=0;j<n;j++){
        
    // }
}