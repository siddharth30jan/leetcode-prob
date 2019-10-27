class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        queue<Node*> Q;
        Q.push(root);
        Q.push(NULL);
        while(!Q.empty()){
            Node *t=Q.front();
             Q.pop();
            if(t==NULL){
                if(!Q.empty())
                    Q.push(NULL);
            }else{
                 t->next=Q.front();
           
            if(t->left) Q.push(t->left);
            if(t->right) Q.push(t->right);
            }            
           
        }
        return root;
    }
};