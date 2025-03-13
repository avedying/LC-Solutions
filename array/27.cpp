#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &nums,int val){
    int low=0,high=0;
    for(high=0;high<nums.size();high++){
        if(nums[high]!=val){
            nums[low]=nums[high];
            low++;
        }
        
    }
    return low;
}
int main(){
    int val=3;
    vector<int> nums{3,2,2,3};
    int length=removeElement(nums,val);
    cout<<length<<endl;
    for(int i=0;i<length;i++){cout<<nums[i]<<" ";} 

    cout<<endl;
    for(vector<int>::iterator iter=nums.begin();iter!=nums.end();iter++){
        cout<<*iter<<" ";
    }
    return 0;
}