#include<iostream>
#include<string>  
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    vector <string> v;
    string str = "Utsav is a web developer . Utsav as is as is as is can utsav  can do dsa as well.";
    string temp;

    stringstream ss(str);

    while(ss>>temp){
        v.push_back(temp);
    }

    // print 

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }


    // sort 

    sort(v.begin(),v.end());

    // print after sort 
    // cout<<endl;

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    int maxCount = 1;
    int count = 1;

    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count = 1;

        maxCount = max(maxCount,count);

    }

    // to print the max count word
    count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count = 1;
        if(count == maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }

}