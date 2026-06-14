#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v;
    // vector<int>v(5);
    vector<int>v(5,7);  // input size = 5 and each element is 7 
    // v.push_back(5);
    cout<<v.size()<<endl;
    // v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<v[3];
}