#include <vector>
#include <iostream>

using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int x=0;//width
    int y=0;//height
    int height=matrix.size();//height
    int width=matrix[0].size();//width
    vector<int> b;
    while(true){
        for(int i=x;i<width;i++)b.push_back(matrix[y][i]);
        if(++y==height)break;
        for(int i=y;i<height;i++)b.push_back(matrix[i][width-1]);
        if(--width==x)break;
        for(int i=width-1;i>=x;i--)b.push_back(matrix[height-1][i]);
        if(--height==y)break;
        for(int i=height-1;i>=y;i--)b.push_back(matrix[i][x]);
        if(++x==width)break;
    }
    return b;
}
vector<vector<int>> generateMatrix(int n) {
    int x=0,y=0,m=1;
    vector<vector<int>> a(n,vector<int>(n));
    while(m<n*n){
        for(int i=x;i<n-x-1;i++){
            a[x][i]=m++;
        }
        for(int i=x;i<n-x-1;i++){
            a[i][n-x-1]=m++;
        }
        for(int i=n-x-1;i>x;i--){
            a[n-x-1][i]=m++;
        }
        for(int i=n-x-1;i>x;i--){
            a[i][x]=m++;
        }
        x++;
    }
    if(n%2==1)a[n/2][n/2]=m;
    return a;
}
int main(){
    int n=4;
    vector<int> x={1,2,3,3};
    vector<int> y={5,6,7,8};
    vector<int> z={9,10,11,12};
    vector<vector<int>> b;
    b.push_back(x);
    //b.push_back(y);
    //b.push_back(z);
    // for(int i=0;i<b.size();i++){
    //     for(int j=0;j<b[i].size();j++)
    //     cout<<b[i][j]<<" ";
    // }
    vector<int> a=spiralOrder(b);
    for(int i=0;i<a.size();i++)
            cout<<a[i]<<" ";
    return 0;
}