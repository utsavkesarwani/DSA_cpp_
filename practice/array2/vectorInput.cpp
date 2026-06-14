#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v(5);//input size = 5
    // vector<int>v(10);
    vector<int>v;
    cout<<"Enter the elements of vector";
    for(int i=0;i<10;i++){
        // cin>>v[i];
        int x;
        cin>>x;
        v.push_back(x);
}

    for(int i=0;i<20;i++){
        cout<<v[i]<<" ";
    }

}