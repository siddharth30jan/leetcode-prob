class Solution {
public:
    bool f(ListNode *head,ListNode *&head1){
        if(head==NULL)
            return true;
        bool check=f(head->next,head1);
        if(check==false)
            return false;
        bool store=(head->val==head1->val);
        head1=head1->next;
        return store;
    }
    bool isPalindrome(ListNode* head) {
        return f(head,head);
    }
};