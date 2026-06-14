#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);
    v.pop_back();
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.pop_back();
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
    cout<<"Size is "<<v.size()<<endl;

    v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"Capacity is "<<v.capacity()<<endl;
    cout<<"Size is "<<v.size()<<endl;
    // cout<<v[0]<<" "<<v[6];
}