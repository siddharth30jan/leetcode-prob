class Solution {
public:
    bool searchMatrix(vector<vector<int>>& V, int t) {
        if(V.empty()) return false;
        int i=0;
        int j=V[0].size()-1;
        while(j>=0&&i<V.size()){
           // cout<<"i "<<i<<" j "<<j<<" "<<V[i][j]<<endl;
            if(t<V[i][j])
                j--;
            else if(t>V[i][j])
                i++;
            else
            return true;
        }
        return false;
    }
};