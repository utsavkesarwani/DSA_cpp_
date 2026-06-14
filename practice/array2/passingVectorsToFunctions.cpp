#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void change(vector<int>&a){
    a[0]=100;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(16);
    v.push_back(10);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


// passing vectors to functions : diff. to arrays 

// vectors are passed by value . each time you pass , new vactor is created. 