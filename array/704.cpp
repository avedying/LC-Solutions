#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums,int target){
    int low=0;
    int high=nums.size();
    
    while(low<high){
        int mid=(low+high)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]<target)low=mid+1;
        else high=mid;
    }
    return -1;
}
int main(){
    int target = 9;
    vector<int> vct{-1,0,3,5,9,12};
    cout<<search(vct,target)<<endl;
    return 0;
}
