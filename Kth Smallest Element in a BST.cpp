class Solution {
public:
  void f(TreeNode* root, int &k,vector<int> &V){
        if(root==NULL) return;
        f(root->left,k,V);
        if(k>0)
        V.push_back(root->val);
        k--;
        if(k==0)
            return;
        f(root->right,k,V);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return 0;
        vector<int> V;
       
        f(root,k,V);
        return V.back();
        
    }
};