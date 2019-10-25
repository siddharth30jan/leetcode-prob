class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL||head->next->next==NULL)
            return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* op=odd;
        ListNode* ep=even;
        ListNode* t=even->next;
        int f=1;
        while(t){
            if(f==1){
                f=0;
                 op->next=t;
                op=op->next;
            }else{
                f=1;
                ep->next=t;
                ep=ep->next;
            }
            t=t->next;
        }
        op->next=even;
        ep->next=NULL;
        return odd;
    }
};