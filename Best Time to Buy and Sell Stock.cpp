class Solution {
public:
    int maxProfit(vector<int>& V) {
        int ans=0;
        int min=INT_MAX;
        for(auto i:V){
            if(i<min)
                min=i;
            else
                ans=max(ans,i-min);
        }
        return ans;
    }
};