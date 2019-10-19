class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        Node *T=head;
      
        while(T!=NULL){
             Node *head1=new Node(T->val,NULL,NULL);
            Node *temp=T->next;
            T->next=head1;
            head1->next=temp;
            T=temp;
        }
       
       
        T=head;
      
        while(T!=NULL){
         
            if(T->random)
                  T->next->random=T->random->next;
              
            
         
            T=T->next->next;
            
            
        }
        
    
        
        //segregate
         
       
        Node *orig=head;
        Node *ans=head->next;
         T=ans;
        while(ans->next!=NULL){
            orig->next=orig->next->next;
            ans->next=ans->next->next;
            orig=orig->next;
            ans=ans->next;
        }
        orig->next=NULL;
        
       
        
        return T;
        
        
        
       
        
        
    }
};