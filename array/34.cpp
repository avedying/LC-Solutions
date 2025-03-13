#include <bits/stdc++.h>

using namespace std;
int rightborder(vector<int> &nums,int target){
    int left=0,right=nums.size();
    int rightborder=0;
    while(left<right){
        int mid=(left+right)/2;
        if(nums[mid]<=target){
            left=mid+1;
            //rightborder=left;
        }
        else if(nums[mid]>target)right=mid;
    }
    return left-1;
}
int leftborder(vector<int> &nums,int target){
    int left=0,right=nums.size()-1;
    int leftborder=0;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]<target)left=mid+1;
        else if(nums[mid]>=target)right=mid-1;
    }
    return right+1;
}
vector<int> searchRange(vector<int> &nums,int target){
    int right=rightborder(nums,target);//5
    int left=leftborder(nums,target);//6
    cout<<left<<" "<<right<<endl;
    if(right>left||right==left){
        cout<<"1"<<endl;
        return {left,right}; 
    }
    else{
        cout<<"2"<<endl;
        return {-1,-1};
    }
}
int main(){
    vector<int> nums{5,7,7,8,8,10};
    int target=8;
    vector<int> x=searchRange(nums,target);
    for(vector<int>::iterator iter=x.begin();iter!=x.end();iter++)
    cout<<*iter<<" ";
    cout<<endl;
    for(int i=0;i<x.size();i++)
    cout<<x[i]<<" ";
    cout<<endl;
    cout<<x.front()<<" "<<x.back()<<endl;
    return 0;
}