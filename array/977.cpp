#include <bits/stdc++.h>

using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
    vector<int> a(nums.size());
    int i=0,j=nums.size()-1;
    int k=nums.size()-1;
    while(i<=j){
        if(nums[i]*nums[i]>=nums[j]*nums[j]){
            a[k]=nums[i]*nums[i];
            i++;
        }
        else {
            a[k]=nums[j]*nums[j];
            j--;
        }
        k--;
    }
    return a;
}
int main(){
    vector<int> nums{-4,-1,0,3,10};
    vector<int> a=sortedSquares(nums);
    for(vector<int>::iterator it=a.begin();it!=a.end()-1;it++){
        cout<<*it<<" ";
    }
    cout<<*(a.end()-1)<<endl;
    return 0;
}