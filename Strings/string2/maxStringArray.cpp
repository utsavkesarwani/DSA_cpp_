#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"0101","00234","004320","00234","00098","00876"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for(int i=0;i<5;i++){
        int x = stoi(arr[i]);
        if(x>max){
            max = x;
            maxS = arr[i];
        }

    }
    cout<<max<<endl;
    cout<<maxS;

}