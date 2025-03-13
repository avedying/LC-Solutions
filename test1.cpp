#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
//数组初始化
    vector<int> v1(a,a+5);//数组初始化时赋值，a和a+5都是指针，区间是左闭右开 
    vector<int> v2=v1;//数组复制
    vector<int> v3(v1);//数组复制
//数组赋值
    vector<int> v4,v5;
    v4.assign(5,9);//一般的赋值，并不是在初始化时赋值
    v5.assign(a,a+5);
//迭代器
    vector<int>::iterator iter;
    iter=v1.begin();
    cout<<(*iter)<<" ";

    for(int i=0;i<5;i++)
    cout<<v5[i]<<" ";
    cout<<endl;
    
    return 0;
}