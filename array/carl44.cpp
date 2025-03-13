#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n,m,x;
    int total_sum=0;
    cin>>n>>m;
    vector<int> s;
    vector<int> t;
    vector<vector<int>> b;
    for(int i=0;i<n;i++){
        vector<int> a;
        int sum=0;
        for(int j=0;j<m;j++){
            cin>>x;
            a.push_back(x);
            sum+=x;
        }
        total_sum+=sum;
        s.push_back(total_sum);
        b.push_back(a);
    }
    int min=s[n-1];
    for(int i=0;i<n;i++){
        int other_side=s[n-1]-s[i];
        if(abs(other_side-s[i])<min){
            min=abs(other_side-s[i]);
            if(min==0)break;
        }
    }
    total_sum=0;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=b[j][i];
        }
        total_sum+=sum;
        t.push_back(total_sum);
    }
    for(int i=0;i<m;i++){
        int other_side=t[m-1]-t[i];
        if(abs(other_side-t[i])<min){
            min=abs(other_side-t[i]);
            if(min==0)break;
        }
    }
    cout<<min<<endl;
    return 0;
}