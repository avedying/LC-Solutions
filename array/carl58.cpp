#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n,m,a,b,sum=0;
    vector<int> vct;
    cin>>n;
    vector<int> x(1);
    while(n--){
        cin>>m;
        sum+=m;
        vct.push_back(m);
        x.push_back(sum);
    }
    while(scanf("%d %d",&a,&b)!=EOF){
        cout<<x[b+1]-x[a]<<endl;
    }
    return 0;
}