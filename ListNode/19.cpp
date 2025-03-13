#include <vector>
#include <iostream>

using namespace std;
typedef struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
}ListNode;
ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode *virtual_head=(ListNode *)malloc(sizeof(ListNode));
     ListNode *pre=virtual_head,*p=head;
     virtual_head->next=head;
     int m=n;
     while(m--){
        p=p->next;
     }   
     while(p!=NULL){
        p=p->next;
        pre=pre->next;
     }
     ListNode *temp=pre->next->next;
     pre->next=temp;
     return virtual_head->next;
    }
int main(){
    
    return 0;
}