/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool f(TreeNode *r,TreeNode *r1){
    if(r==NULL&&r1==NULL)
        return true;
        if(r==NULL||r1==NULL)
            return false;
        return ((r->val==r1->val)&&f(r->left,r1->right)&&f(r->right,r1->left));
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
      return f(root->left,root->right);
    }
};



//Iterative - beats 100%!!!!

class Solution {
public:
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
      queue<TreeNode*> q1;
        q1.push(root);
        q1.push(root);
        while(!q1.empty()){
            TreeNode *r=q1.front();
             q1.pop();
            TreeNode *r1=q1.front();
           
            q1.pop();
            if(r==NULL&&r1==NULL)
            continue;
        if(r==NULL||r1==NULL)
            return false;
            if(r->val!=r1->val)
                return false;
        q1.push(r->left);
            q1.push(r1->right);
           q1.push(r->right);
            q1.push(r1->left);
        }
        return true;
    }
};