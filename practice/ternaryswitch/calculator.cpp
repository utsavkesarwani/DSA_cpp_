// WAP TO CREATE A CALCULATOR THAT PERFORMS BASIC ARITHMETIC OPERATIONS (ADD, SUBTRACT , MULTIPLY AND DIVIDE ) USING SWITCH CASE AND FUNCTIONS. THE CALCULATOR SHOULD INPUT TWO NUMBERS AND AN OPERATOR FROM USER.


// Ek idea dimag me rakho ki jaise hum calculator me plhe value likhte hai phir operator likhte hai uske badd phir se value likhte hai to matter ko samjhte hue chalo aisa hi kuch user bhi input karega to uske liye hum kya kr skte hai 


#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter your problem";
    cin>>a>>op>>b;
    switch(op){
        case '+' :
            cout<<a<<"+"<<b<<endl;
            cout<<a+b;
            break;
            
        case '-' :
            cout<<a<<"-"<<b<<endl;
            cout<<a-b;
            break;
            
        case '*' :
            cout<<a<<"*"<<b<<endl;
            cout<<a*b;
            break;
            
        case '/' :
            cout<<a<<"/"<<b<<endl;
            cout<<a/b;
            break;
        
        default:
            cout<<"Invalid input";
        }






}