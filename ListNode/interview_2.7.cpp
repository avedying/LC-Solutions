#include <vector>
#include <iostream>

using namespace std;
typedef struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL){}//节点的构造函数
}ListNode; 
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *a=headA,*b=headB;
    int numa=0,numb=0;
    while(a!=NULL){
        numa++;
        a=a->next;
    }
    while(b!=NULL){
        numb++;
        b=b->next;
    }
    a=headA;b=headB;
    if(numa==0||numb==0)return NULL;
    if(numa>=numb){
        int dis=numa-numb;
        while(dis--)a=a->next;
    }
    else{
        int dis=numb-numa;
        while(dis--)b=b->next;
    }
    while(a!=NULL&&a!=b){
        a=a->next;
        b=b->next;
    }
    if(b==NULL)return NULL;
    else return a;
    }
int main(){
    
    return 0;
}
