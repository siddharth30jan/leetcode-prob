class Solution {
public:
    int findPeakElement(vector<int>& V) {
        int l=0;
        int r=V.size()-1;
        while(l<r){
            int m=l+(r-l)/2;
            if(V[m]<V[m+1])
                l=m+1;
            else
                r=m;
                 
        }
        return l;
    }
};