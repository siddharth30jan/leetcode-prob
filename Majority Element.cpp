class Solution {
public:
    int majorityElement(vector<int>& V) {
        
        int ans=V[0];
        int c=1;
        for(int i=1;i<V.size();i++){
             if(c==0)
                ans=V[i];
            if(V[i]==ans) c++;
            else
                c--;
        }
        return ans;
    }
};