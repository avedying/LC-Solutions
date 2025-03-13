#include <vector>
#include <iostream>

using namespace std;
typedef struct ListNode{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x),next(NULL){}
}ListNode;

//迭代法
ListNode* reverseList(ListNode* head) {
        ListNode *pre=NULL,*cur=head;
        while(cur!=NULL){
            ListNode *temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }
//递归法
ListNode* reverse(ListNode* pre,ListNode *head){
    if(head==NULL)return pre;
    ListNode *temp=head->next;
    head->next=pre;
    pre=head;
    head=temp;
    return reverse(pre,head);
}
ListNode* reverseList(ListNode* head){
    return reverse(NULL,head);
}
int main(){
    
    return 0;
}