#include <iostream>
using namespace std;
int main(){
    int sp,cp;
    int p,l;
    cout<<"Enter selling price";
    cin>>sp;
    cout<<"Enter cost price";
    cin>>cp;
    if(sp>cp){
        cout<<"in profit"<<endl;
        p=sp-cp;
        cout<<"profit of"<<" "<< p;
    }
    else if(sp==cp){
        cout<<"no profit no loss";
    }
    else {
        cout<<"loss"<<endl;
        l=cp-sp;
        cout<<"loss of"<<" "<< l;
    }
    

    
}