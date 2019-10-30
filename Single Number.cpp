class Solution {
public:
    int singleNumber(vector<int>& V) {
        int x=V[0];
        for(int i=1;i<V.size();i++) x=(x^V[i]);
        return x;
    }
};