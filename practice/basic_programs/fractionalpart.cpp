// take float input and print the fractional part o f the real number


#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    float y = (int)x;
    if(y<0) y=y-1;
    cout<<x-y;
}