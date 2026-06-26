// take input of positive number and check whether it is divisible by 5 and 3
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter positive number";
    cin>>x;
    if(x%3==0 && x%5==0){
        cout<<"Number is divisible by 5 and 3";
    }
    else{
        cout<<"it is not divisible by 5 and 3";
    }

}