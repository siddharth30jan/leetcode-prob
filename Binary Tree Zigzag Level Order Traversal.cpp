class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        stack<TreeNode*> V1,V2;
        V1.push(root);
        vector<vector<int>> T;
        vector<int> V;
        while(!V1.empty()||!V2.empty()){
            if(!V.empty()){
                T.push_back(V);
                 V.clear();
            }
            while(!V1.empty()){
                TreeNode* t=V1.top();
                V.push_back(t->val);
                V1.pop();
                if(t->left)
                    V2.push(t->left);
                if(t->right)
                    V2.push(t->right);
            }
              if(!V.empty()){
                T.push_back(V);
                 V.clear();
            }
             
             while(!V2.empty()){
                 TreeNode* t=V2.top();
                V.push_back(t->val);
                 V2.pop();
                if(t->right)
                    V1.push(t->right);
                if(t->left)
                    V1.push(t->left);
            }
        }
         if(!V.empty()){
                T.push_back(V);

            }
        return T;
    }
};