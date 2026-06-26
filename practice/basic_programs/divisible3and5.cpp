//wap to check whether a number is divisible by 3 and 5 and not divisible by 15

#include <iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter a number you want to check";
    cin>>x;
    if(x%3==0 || x%5==0){
        if(x%15==0){
            cout<<"Number is divisble by 3 or 5 and divisble by 15";
        }
        else{
            cout<<"number is divisible by 3 and 5 but not divisible by 15";
        }
        
    }
    else{
        cout<<"Number is not divisible by 3 or 5";
    }
}
