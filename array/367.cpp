#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    int low=1,high=num;
    while(low<=high){
        int mid=low+(high-low)/2;
        if((num*1.0/mid)==mid){return true;}
        else if((1.0*num/mid)>mid)low=mid+1;
        else high=mid-1;
    }
    return false;
    }

int main(){
    int num=5;
    if(isPerfectSquare(num))cout<<"true"<<endl;
    else cout<<"false"<<endl;
}