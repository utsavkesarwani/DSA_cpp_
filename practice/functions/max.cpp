// wap to print the maximum number 

#include<iostream>
using namespace std;
int maxthree(int a,int b, int c){
    // int max;
    if(a>b && a>c){
        // max=a;
        return a;
    }
    else if(b>a && b>c){
        // max=b;
        return b;
    }
    else{
        // max=c;
        return c;
    }

}

int main(){
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    
    cout<<maxthree(a,b,c);
}