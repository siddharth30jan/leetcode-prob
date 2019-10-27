/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* merge(ListNode* x,ListNode* y){
        if(x==NULL)
            return y;
        if(y==NULL)
            return x;
        ListNode* c;
        if(x->val<=y->val){
            c=x;
            c->next=merge(x->next,y);
        }
        else{
            c=y;
            c->next=merge(x,y->next);
        }
        return c;
        
    }
     ListNode* f(ListNode* head){
         if(head==NULL||head->next==NULL)
             return head;
         //split
          ListNode* fast=head->next;
          ListNode* slow=head;
         while(fast&&fast->next){
             fast=fast->next->next;
             slow=slow->next;
         }
          ListNode* head1=slow->next;
         slow->next=NULL;
         cout<<head->val<<" "<<head1->val<<endl;
         ListNode* left=f(head);
         ListNode* right=f(head1);
         return merge(left,right);
     }
    ListNode* sortList(ListNode* head) {
        return f(head);
    }
};