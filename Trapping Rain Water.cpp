class Solution {
public:
    int trap(vector<int>& V) {
        if(V.empty())
            return 0;
        int left[V.size()],right[V.size()];
        left[0]=V[0];
        for(int i=1;i<V.size();i++)
            left[i]=max(V[i],left[i-1]);
        right[V.size()-1]=V.back();
        for(int i=V.size()-2;i>=0;i--)
            right[i]=max(V[i],right[i+1]);
        int ans=0;
        for(int i=0;i<V.size();i++){
            ans+=min(left[i],right[i])-V[i];
        }
        return ans;
    }
};