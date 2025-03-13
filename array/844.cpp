#include <vector>
#include <iostream>
#include <stack>
using namespace std;

// bool backspaceCompare(string s, string t) {
//     stack<char> sk1,sk2;
//     for(string::iterator it1=s.begin();it1!=s.end();it1++){
//         if(*it1=='#'){
//             if(sk1.empty()){}
//             else sk1.pop();
//         }
//         else sk1.push(*it1);
//     }
//     for(string::iterator it2=t.begin();it2!=t.end();it2++){
//         if(*it2=='#'){
//             if(sk2.empty()){}
//             else sk2.pop();
//         }
//         else sk2.push(*it2);
//     }
//     s.resize(sk1.size());
//     t.resize(sk2.size());
//     for(int i=sk1.size()-1;i>=0;i--){
//         s[i]=sk1.top();
//         sk1.pop();
//     }
//     for(int i=sk2.size()-1;i>=0;i--){
//         t[i]=sk2.top();
//         sk2.pop();
//     }
//     cout<<s<<" "<<t<<endl;
//     int x=s.compare(t);
//     if(x==0)return true;
//     else return false;
// }
bool backspaceCompare(string s, string t) {
    int s1=0,t1=0;
    int i=s.size()-1,j=t.size()-1;
    while(1){
        while(i>=0){
            if(s[i]=='#'){
                s1++;
                i--;
            }
            else if(s1>0){
                s1--;
                i--;
            }
            else break;
        }
        while(j>=0){
            if(t[j]=='#'){
                t1++;
                j--;
            }
            else if(t1>0){
                t1--;
                j--;
            }
            else break;
        }
        if(i<0||j<0)break;
        else if(s[i]!=t[j])return false;
        else if(s[i]==t[j]){}
        i--;j--;

    }
    if(i==j)return true;
    else return false;
}
int main(){
    string s = "ab#c", t = "a#c";
    cout<<backspaceCompare(s,t)<<endl;
    return 0;
}