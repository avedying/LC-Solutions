#include <vector>
#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL) {} 
};
//不可以访问空指针，虚拟头节点
ListNode* removeElements(ListNode* head, int val) {
        ListNode *p,*q;
        while(head!=NULL&&head->val==val)head=head->next;
        if(head==NULL)return head;
        p=head->next;
        q=head;
        while(p!=NULL){
            if(p->val==val){
                q->next=p->next;
                p=p->next;
            }
            else {
                p=p->next;
            q=q->next;
            }
        }
        return head;
}
ListNode* removeElements(ListNode* head, int val) {
    ListNode *p,*pre,*q;
    p=(ListNode *)malloc(sizeof(ListNode));
    p->next=head;
    q=head;pre=p;
    while(q!=NULL){
        if(q->val==val){
            pre->next=q->next;
            q=q->next;
        }
        else {
            q=q->next;
            pre=pre->next;
        }
        
    }
    return p->next;
}
int main(){
    
    return 0;
}