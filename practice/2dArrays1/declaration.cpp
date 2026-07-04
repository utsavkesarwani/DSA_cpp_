#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[3][3];
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    // cout<<arr[1][2];
    // for(int i=0;i<=2;i++){
    //     cout<<arr[0][i]<<" ";
    // }
    // cout<<endl;

    // for(int i=0;i<=2;i++){
    //     cout<<arr[1][i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=2;i++){
    //     cout<<arr[2][i]<<" ";
    // }
    // cout<<endl;

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // rows = 3    0-2
    // columns = 3   0-2
    // arr[0][0]=4;
    // cout<<arr[0][0];


}