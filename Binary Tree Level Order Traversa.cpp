class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> T;
        vector<int> V;
        if(root==NULL) return T;
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        while(!Q.empty()){
            TreeNode* t=Q.front();
            Q.pop();
            if(t==NULL){
                if(!Q.empty())
                    Q.push(NULL);
                T.push_back(V);
                V.clear();
            }else{
                V.push_back(t->val);
                if(t->left) Q.push(t->left);
                if(t->right) Q.push(t->right);
            }
            
        }
        return T;
    }
};