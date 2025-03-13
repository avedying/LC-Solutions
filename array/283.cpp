// #include <bits/stdc++.h>
// using namespace std;

// void moveZeroes(vector<int>& nums) {
//     int low=0,high=0;
//     for(int high=0;high<nums.size();high++){
//         if(nums[high]==0){}
//         else {
//             nums[low]=nums[high];
//             low++;
//         }
//     }
//     memset(&nums[0]+low-1,0,sizeof(int));
//     for(int i=low;i<nums.size();i++){
//         nums[i]=0;
//     }
// }
// int main(){
//     vector<int>nums{0,1,0,3,12};
//     moveZeroes(nums);
//     for(auto &x:nums){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace  std;
void moveZeroes(vector<int>& nums) {
    int low=0;
    int high=0;
    for(high=0;high<nums.size();high++){
        if(nums[high]==0){}
        else {
            nums[low]=nums[high];
            low++;
        }
    }
    for(int i=low;i<nums.size();i++)
    nums[i]=0;
}
int main(){
    vector<int> nums{0,1,0,3,12};
    moveZeroes(nums);
    int i;
    for(i=0;i<nums.size()-1;i++){
        cout<<nums[i]<<" ";
    }
    cout<<nums[i]<<endl;
    return 0;
}