// PRINT ALL EVEN NUMBER BETWEEN 1 TO 100;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which u want to print";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
} 