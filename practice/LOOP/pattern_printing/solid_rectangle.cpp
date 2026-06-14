// wap to print the solid rectangle pattern
// user input -> no. of rows and no. of columns 

#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows:";
    cin>>r;
    cout<<"Enter number of columns:";
    cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}