// leetcode q 14 

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // ["flower","flow","flight"]

    vector<string>v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    
    int n = v.size();

    // print original string 
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }

    cout<<endl;



    // if there is only one string 

    if(n==1){
        cout<<v[0]<<endl;
        return 0;
    }

    // sort the strings 
    sort(v.begin(),v.end());

    // first and last string after sorting 
    string first = v[0];
    string last = v[n-1];

    string s = "";

    // compare characters 
    for(int i=0;i<min(first.length(),last.length());i++){
        if(first[i]==last[i]){
            s += first[i];
        }
        else break;
    }
    
    // print the answer 
    cout<< "Longest common prefix:" << s <<endl;
    
    return 0;
    }
