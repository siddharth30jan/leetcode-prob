class Solution {
public:
    int maxProfit(vector<int>& V) {
       int ans=0;
        for(int i=1;i<V.size();i++){
            if(V[i]>V[i-1])
                ans+=V[i]-V[i-1];
        }
        return ans;
    }
};