class Solution {
public:
    void f(vector<int> V,int x,vector<vector<int>> &P){
        if(x==V.size()){
            P.push_back(V);
            return;
        }
        for(int i=x;i<V.size();i++){
            swap(V[i],V[x]);
            f(V,x+1,P);
            swap(V[i],V[x]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> P;
        if(nums.empty())
            return P;
       
        f(nums,0,P);
        return P;
    }
};