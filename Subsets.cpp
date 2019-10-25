class Solution {
public:
    void f(vector<int>& V,int index,vector<int> &Z,vector<vector<int>> &T){
        
            T.push_back(Z);
        
        
        for(int i=index;i<V.size();i++){
            Z.push_back(V[i]);
             f(V,i+1,Z,T);
            Z.pop_back();
           
            
        }
    }
    vector<vector<int>> subsets(vector<int>& V) {
        if(V.empty())
            return {{}};
        vector<vector<int>> T;
        vector<int> Z;
        f(V,0,Z,T);
        return T;
    }
};