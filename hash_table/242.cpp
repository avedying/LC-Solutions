#include <vector>
#include <iostream>
#include <string.h>
#include <unordered_map>
using namespace std;
bool isAnagram(string s, string t) {
    unordered_map<char,int> unmp;
    for(int i=0;i<s.size();i++){
        if(unmp.find(s[i])==unmp.end())
        unmp[s[i]]=1;
        else 
        unmp.find(s[i])->second++;
    }
    for(int i=0;i<t.size();i++){
        unordered_map<char,int>::iterator iter=unmp.find(t[i]);
        if(iter==unmp.end())return false;
        else if(iter->second==1)unmp.erase(iter);
        else iter->second--;
    }
    if(unmp.empty())return true;
    else return false;

}
int main(){
    string s = "anagram", t = "nagarama";
    cout<<isAnagram(s,t);
    return 0;
}