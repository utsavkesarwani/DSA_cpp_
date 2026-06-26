// Take input of positve number and tell whether it is three digit number or not

#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a positive number";
    cin>>x;
    if(x>99 && x<=999 ){
        cout<<"it is three digit positive number";
    }
    else{
        cout<<"it is not three digit number";
    }
}


// first thought me maine x>99 ki condition to laga di pr is baat pr to 
// dhyan hi nhi gaya ki 1000 four digit number hai to uske liye bhi condition lagani padegi 
