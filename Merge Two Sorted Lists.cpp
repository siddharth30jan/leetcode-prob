
ListNode* f(ListNode *X,ListNode *Y){
    if(X==NULL)
        return Y;
    if(Y==NULL)
        return X;
    ListNode *c;
    if(X->val<=Y->val){
        c=X;
        c->next=f(X->next,Y);
    }else{
        c=Y;
        c->next=f(X,Y->next);
    }
    return c;
}
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        return f(l1,l2);
    }
};