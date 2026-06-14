// wap to print the reverse triangle pattern 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    // no. of stars = n+1-i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}