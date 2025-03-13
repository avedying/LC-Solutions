#include <vector>
#include <iostream>

using namespace std;
typedef struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
}ListNode; 
ListNode* swapPairs(ListNode* head) {
        ListNode *virtual_head=(ListNode *)malloc(sizeof(ListNode));
        ListNode *pre,*p;
        virtual_head->next=head;
        pre=virtual_head;
        p=head;
        if(pre->next==NULL)return virtual_head->next;
        while(p->next!=NULL){
            ListNode *temp=p->next->next;
            pre->next=p->next;
            pre->next->next=p;
            p->next=temp;
            pre=p;
            if(pre->next==NULL)break;
            else p=pre->next;
        }
        return virtual_head->next;
    }

int main(){
    
    return 0;
}