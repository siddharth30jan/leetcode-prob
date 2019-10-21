
class Solution {
public:
    static bool f(TreeNode* root,long long x,long long y){
        if(root==NULL)
            return true;
        if(root->val<y&&root->val>x&&f(root->left,x,root->val)&&f(root->right,root->val,y))
            return true;
        return false;
    }
    bool isValidBST(TreeNode* root) {
        
       
        return f(root,LLONG_MIN,LLONG_MAX);
        
        
    }
};