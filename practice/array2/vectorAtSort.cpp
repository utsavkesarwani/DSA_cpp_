#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(16);
    v.push_back(10);
    // cout<<v[3]<<endl;
    // v.at(3)=98;
    // cout<<v.at(3);

    for(int i=0;i<v.size();i++){
        // cout<<v[i];
        cout<<v.at(i)<<" ";
        cout<<endl;
    }
    cout<<endl;
    // sort 
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}