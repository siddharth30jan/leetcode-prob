class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> V;
        for(auto i:A){
            for(auto j:B)
                V[i+j]++;
        }
        int ans=0;
         for(auto i:C){
            for(auto j:D)
               if(V.find(-(i+j))!=V.end())
                   ans+=V[-(i+j)];
        }
        return ans;
        
    }
};