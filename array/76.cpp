#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <set>
using namespace std;
string minWindow(string s, string t) {
    int j=0,sum=0,min=s.size()+1;
    int x=0,y=0;
    map<char,int> mpt;
    map<char,int> mps;
    for(int i=0;i<t.size();i++){
        if(mpt.find(t[i])==mpt.end())
        mpt[t[i]]=1;
        else mpt[t[i]]++;
    }
    for(int i=0;i<s.size();i++){
        mps[s[i]]++;
        bool q=true;
        for(map<char,int>::iterator it=mpt.begin();it!=mpt.end();it++){
            if(mps[it->first]>it->second||mps[it->first]==it->second)
            q=q&&true;
            else {
                q=q&&false;break;
            }
        }
        while(q){
            sum=i-j+1;
            if(sum<min){
                min=sum;
                x=j;y=i;
            }
            mps[s[j]]--;
            if(mps[s[j]]==0)
            mps.erase(s[j]);
            j++;
            for(map<char,int>::iterator it=mpt.begin();it!=mpt.end();it++){
            if(mps[it->first]>it->second||mps[it->first]==it->second)
            q=q&&true;
            else {
                q=q&&false;
                break;
            }
        }
        }
    }
    if(min==s.size()+1)return "";
    else return s.substr(x,y-x+1);
}
int main(){
    string s = "acbdbaab", t = "aabd";
    cout<<minWindow(s,t)<<endl;
    return 0;
}
