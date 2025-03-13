#include <vector>
#include <iostream>
#include<map>
#include <string.h>
using namespace std;

int totalFruit(vector<int>& fruits) {
    int j=0,sum=0,max=0,k=0;
    map<int,int> mp;
    
    for(int i=0;i<fruits.size();i++){
        if(mp.find(fruits[i])==mp.end())
            mp[fruits[i]]=1;
        else {
            mp.find(fruits[i])->second++;
            cout<<mp.find(fruits[i])->second<<endl;
            cout<<mp[fruits[i]]<<endl;
        }
        while(mp.size()>2){
            mp[fruits[j]]--;
            if(mp[fruits[j]]==0)
            mp.erase(mp.find(fruits[j]));
            j++;
        }
        sum=i-j+1;
        max=sum>max?sum:max;
    }
    return max;
}
int main(){
    vector<int> nums{3,3,3,1,2,1,1,2,3,3,4};
    cout<<totalFruit(nums)<<endl;
    return 0;
}