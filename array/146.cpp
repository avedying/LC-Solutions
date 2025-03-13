#include <vector>
#include <iostream>

using namespace std;
vector<int> spiralArray(vector<vector<int>>& array) {
    if(array.size()==0){
        vector<int> b(0);
        return b;
    }
    vector<int> b;
    int x=0;//width
    int y=0;//height
    int height=array.size();//height
    int width=array[0].size();//width
    
    while(true){
        for(int i=x;i<width;i++)b.push_back(array[y][i]);
        if(++y==height)break;
        for(int i=y;i<height;i++)b.push_back(array[i][width-1]);
        if(--width==x)break;
        for(int i=width-1;i>=x;i--)b.push_back(array[height-1][i]);
        if(--height==y)break;
        for(int i=height-1;i>=y;i--)b.push_back(array[i][x]);
        if(++x==width)break;
    }
    return b;
    }

int main(){
    
    return 0;
}

