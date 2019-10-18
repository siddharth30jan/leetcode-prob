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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* l3=new ListNode(-1);
        ListNode* temp=l3;
        
        while(l1&&l2){
            int s=l1->val+l2->val+carry;
            int t=s;
            if(s>=10){
                 s=s%10;
                carry=t/10;
            }else{
                carry=0;
            }
            cout<<"s "<<s<<"  car "<<carry<<endl;
            l3->next=new ListNode(s);
            l3=l3->next;   
             l1=l1->next; 
             l2=l2->next; 
        }
        
            while(l1!=NULL){
           int s=carry+l1->val;
                int t=s;
            if(s>=10){
                 s=s%10;
                carry=t/10;
            }else{
                carry=0;
            }
                l3->next=new ListNode(s);
            l3=l3->next;
                l1=l1->next; 
                
            }
        
         while(l2!=NULL){
           int s=carry+l2->val;
                int t=s;
            if(s>=10){
                 s=s%10;
                carry=t/10;
            }else{
                carry=0;
            }
                l3->next=new ListNode(s);
            l3=l3->next;
                l2=l2->next; 
                
            }
          
            if(carry!=0)
                l3->next=new ListNode(carry);
            
    
        
            
        temp=temp->next;
        return temp;
        
    }
};