#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; // you need not to mention the size
    // v[0]=1;
    // inserting /input do not use []
    // v.push_back(6);
    // v.push_back(3);
    // v[1]=3;
    // v.push_back(5);
    // v.push_back(7);
    // v[0]=1;

    // if you want to update / access

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
 
    

    v.push_back(4);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(8);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(3);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(6);
    // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    
    
}