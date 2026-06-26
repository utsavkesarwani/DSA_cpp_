#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// two pass solution 
void sort(vector<int>& nums){
    int n=nums.size();
    int noz=0;
    int noo=0;
    int noT=0;

    for(int i=0;i<n;i++){
        if(nums[i]==0) noz++;
        if(nums[i]==1) noo++;
        if(nums[i]==2) noT++;
    }

    cout<<noz<<endl;
    cout<<noo<<endl;
    cout<<noT;

    // filling elements 
    for(int i=0;i<n;i++){
        if(i<noz) nums[i]=0;
        else if(i<(noz+noo)) nums[i]=1;
        else nums[i]=2;
    }
};

// now we are going to solve this 
// by using 3 pointer algorithm 
// also known as dutch flag algorithm

void sortColorsByDutchFlag(vector<int>& nums){
    int n=nums.size();

    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else break;
    }
};

int main(){
    vector<int>nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(0);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    // sort(nums);
    sortColorsByDutchFlag(nums);
    cout<<endl;

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}