class Solution {
public:
    void rotate(vector<vector<int>>& V) {
        for(int i=0;i<V.size();i++){
            for(int j=i+1;j<V[i].size();j++)
                swap(V[i][j],V[j][i]);
        }
        
       for(int i=0;i<V.size();i++)
            reverse(V[i].begin(),V[i].end());
       
    }
};