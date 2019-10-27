
class Solution {
public:
    TreeNode* f(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL)
            return NULL;
        if(root==p||root==q)
            return root;
        TreeNode* left=f(root->left,p,q);
        TreeNode* right=f(root->right,p,q);
        if(left!=NULL and right!=NULL)
            return root;
       if(left!=NULL) return left;
        return right;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return f(root,p,q);
    }
};