#include <vector>
#include <iostream>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int low=0,high=0;
    int sum=nums[low],t=0,min=nums.size()+1;
    while(high<nums.size()||low<nums.size()){
        if(sum<target){
            high++;
            if(high<nums.size())
            sum+=nums[high];
            else break;
        }
        else if(sum>=target){
            t=high-low+1;
            if(t<min)min=t;
            sum-=nums[low];
            low++;
        }
    }
    if(min>nums.size())return 0;
    else return min;
}
int main(){
    int target=11;
    vector<int> nums{1,1,1,1,1,1,1,1};
    cout<<minSubArrayLen(target,nums)<<endl;
    return 0;
}