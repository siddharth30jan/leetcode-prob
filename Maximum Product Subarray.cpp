class Solution {
public:
    int maxProduct(vector<int>& A) {
       int ans=A[0];
        int prevMax=A[0];
        int prevMin=A[0];
        int curMax=A[0];
        int curMin=A[0];
        for(int i=1;i<A.size();i++){
            curMax=max(prevMax*A[i],max(prevMin*A[i],A[i]));
            curMin=min(prevMax*A[i],min(prevMin*A[i],A[i]));
            ans=max(ans,curMax);
            prevMax=curMax;
            prevMin=curMin;
        }
        return ans;
    }
};