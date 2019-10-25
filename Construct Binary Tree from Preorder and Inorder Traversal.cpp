
class Solution {
public:
     TreeNode* f(vector<int>& pre, vector<int>& in,int &k,int start,int end){
         if(start>end)
             return NULL;
         int i;
         for(i=start;i<=end;i++){
             if(pre[k]==in[i])
                 break;
         }
          TreeNode* root=new  TreeNode(pre[k++]);
         root->left=f(pre,in,k,start,i-1);
           root->right=f(pre,in,k,i+1,end);
         return root;
     }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        if(pre.empty()) return NULL;
        int k=0;
         TreeNode* root=f(pre,in,k,0,in.size()-1);
        return root;
    }
};