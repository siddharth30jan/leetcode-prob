class Solution {
public:
    int missingNumber(vector<int>& V) {
      
        int m=V.size();
        int x=0;
        for(int i=0;i<V.size();i++)
            x+=V[i];
        return (m*(m+1))/2-x;
    }
};