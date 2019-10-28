class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& V) {
        if(V.size()<=1) return V;
        sort(V.begin(),V.end());
        vector<vector<int>> T;
        for(int i=0;i<V.size();i++){
            int end=V[i][1];
            int j;
            for(j=i+1;j<V.size();j++){
                if(V[j][0]<=end){
                    //its overlapping
                    end=max(end,V[j][1]);
                }else
                    break;
            }
                T.push_back({V[i][0],end}); 
            i=j-1;
        }
        return T;
    }
};
 