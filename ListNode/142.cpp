#include <vector>
#include <iostream>

using namespace std;
typedef struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
}ListNode;
ListNode *detectCycle(ListNode *head) {
    bool t=false;
    ListNode *fast=head,*slow=head;
    while(fast!=NULL&&fast->next!=NULL&&slow!=NULL){
        fast=fast->next;
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
            ListNode *a=fast;
            t=true;
            break;
        }
    }
    if(t==false)return NULL;
    else {
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
}
int main(){
    
    return 0;
}