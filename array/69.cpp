#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x){
    int low=0, high=x;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid==x||(mid*mid<x&&(mid+1)*(mid+1)>x))return mid;
        else if(mid*mid>x)high=mid-1;
        else if((mid+1)*(mid+1)<=x)low=mid+1;
    }
    return -1;
}
int main(){
    int x=8;
    cout<<mySqrt(x)<<endl;
    return 0;
}