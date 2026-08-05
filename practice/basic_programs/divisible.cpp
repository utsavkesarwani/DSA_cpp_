// take input of positive number and check whether it is divisible by 5 and 3
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter positive number";
//     cin>>x;
//     if(x%3==0 && x%5==0){
//         cout<<"Number is divisible by 5 and 3";
//     }
//     else{
//         cout<<"it is not divisible by 5 and 3";
//     }

// }



// take input of positive number and check whether it is divisible by 5 and 3

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    if(n<0){
        cout<<"please enter the positive number";
    }
    else{
        if(n%3==0 && n%5==0){
            cout<<"Number is divisble by 5 and 3 both";
        }
        else{
            cout<<"Number is not divisible by 5 and 3 ";
        }
    }
}