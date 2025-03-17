#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int>st;
    vector<int> a;
    for(int i=0;i<nums1.size();i++){
        st.insert(nums1[i]);
    }
    for(int i=0;i<nums2.size();i++){
        if(st.find(nums2[i])!=st.end()){
            a.push_back(nums2[i]);
            st.erase(st.find(nums2[i]));
        }
    }
    return a;
}

int main(){
    vector<int> nums1{1,2,2,1}, nums2 = {2,2};
    vector<int> a=intersection(nums1,nums2);
    for(auto &x : a)
    cout<<x<<" ";
    return 0;
}