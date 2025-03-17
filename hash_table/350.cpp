#include <vector>
#include <iostream>

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> a(1000),b(1000);
    vector<int> c;
    for(int i=0;i<nums1.size();i++)a[nums1[i]]++;
    for(int i=0;i<nums2.size();i++)b[nums2[i]]++;
    for(int i=0;i<1000;i++){
        if(a[i]!=0&&b[i]!=0){
            int x=min(a[i],b[i]);
            while(x--)
            c.push_back(i);
        }
    }
    return c;
}
int main(){
    vector<int> nums1 = {1,2,2,1}, nums2 = {2,2};
    vector<int> x=intersect(nums1,nums2);
    for(auto i:x)
    cout<<i<<"";
    return 0;
}
