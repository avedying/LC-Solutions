#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int low=0,high=0;
        for(int high=0;high<nums.size();high++){
            if(nums[low]==nums[high]){}
            else {
                low++;
                nums[low]=nums[high];
            }
        }
        return low+1;
}

int main(){
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    int n=removeDuplicates(nums);
    cout<<n<<endl;
    for(vector<int>::iterator iter=nums.begin();iter!=nums.begin()+n;iter++)
    cout<<*iter<<" ";
    cout<<endl;
    for(auto &x:nums)
    cout<<x<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<nums[i]<<" ";
    cout<<endl;
    return 0;
}