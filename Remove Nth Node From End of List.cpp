
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||n==0)
            return head;
        ListNode *p=head;
        ListNode *q=head;
        while(n--) p=p->next;
        ListNode *temp=NULL;
        while(p){
            p=p->next;
            temp=q;
            q=q->next;
        }
        if(!temp){
            return head->next;
        }
        temp->next=temp->next->next;
        delete q;
        return head;
    }
};