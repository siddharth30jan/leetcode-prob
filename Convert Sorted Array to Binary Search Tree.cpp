
TreeNode* f(vector<int>& V,int s,int e){
    if(s>e)
        return NULL;
    int m=(s+e)/2;
    TreeNode *temp=new TreeNode(V[m]);
    temp->left=f(V,s,m-1);
    temp->right=f(V,m+1,e);
    return temp;
}
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& V) {
        if(V.empty()) return NULL;
        int s=0;
        int e=V.size()-1;
        return f(V,s,e);
    }
};