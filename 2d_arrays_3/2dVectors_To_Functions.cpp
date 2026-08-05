#include<iostream>
using namespace std;
void change2d(int a[3][3]){
    a[0][0]=9;
}
int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2d(arr);
    cout<<arr[0][0]<<endl;
} 

// passing of 2d arrays into  functions -> problem 
// we have to mention rows and columns both 


// vector<vector<int>>v;
// vector<vector<int > v(m);
// vector<vector<int> v(m,vector<int>(n));
