#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(23);
    v.push_back(33);
    v.push_back(35);
    v.push_back(36);
    v.push_back(63);
    v.push_back(4);
    v.push_back(3);
    int x=4;
    int idx=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx=i;
    // } 


    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }

    cout<<idx;
}