class Solution {
public:
    int rob(vector<int>& V) {
        if(V.empty()) return 0;
        if(V.size()==1)
            return V[0];
        int inc=V[0];
        int exc=0;
        for(int i=1;i<V.size();i++){
            int temp=inc;
            inc=exc+V[i];
            exc=max(exc,temp);
        }
        return max(exc,inc);
    }
};