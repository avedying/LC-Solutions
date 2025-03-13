#include <vector>
#include <iostream>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    
    int low=0;int high=nums.size()-1;
    int mid=0;
    bool t=false;
    while(low<=high){
        mid=low+(high-low)/2;
        if(nums[mid]==target){t=true;break;}
        else if(nums[mid]<target)low=mid+1;
        else high=mid-1;
    }
    
    if(t==true)return mid;
    else return low;

}

int main(){
    vector<int> nums{1,3,5,6};
    int target=7;
    cout<<searchInsert(nums,target)<<endl;
    return 0;
}