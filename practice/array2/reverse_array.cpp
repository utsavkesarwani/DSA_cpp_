#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(9);
    v1.push_back(3);
    v1.push_back(4);

    display(v1);

    // reversing the array by using while loop 

    // int i=0;
    // int j=v1.size()-1;
    // while(i<j){
    //     //swap v1[i]and v1[j]
    //     int temp=v1[i];
    //     v1[i]=v1[j];
    //     v1[j]=temp;
    //     i++;
    //     j--;
    // }

    // now we can do reversing by using for loop
    // for(int i=0,j=v1.size()-1;i<j;i++,j--){
    //     int temp=v1[j];
    //     v1[i]=v1[j];
    //     v1[j]=temp;
    // }


    // we can simply reverse the array ny using built in function 
    reverse(v1.begin(),v1.end());
    display(v1);
}