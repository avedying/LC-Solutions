#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;
unordered_set<int> x;
bool isHappy(int n) {
    x.insert(n);
    if(n==1)return true;
    int m=n,num=0;
    while(m!=0){
        int t=m%10;
        num+=(t*t);
        m=m/10;
    }
    if(x.find(num)==x.end())return isHappy(num);
    else return false;
}
int main(){
    int n=2;
    cout<<isHappy(n)<<endl;
    return 0;
}