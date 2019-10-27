class Solution {
public:
    bool increasingTriplet(vector<int>& V) {
        if(V.size()<=2) return false;
        
        int first=INT_MAX;
        int second=INT_MAX;
        for(auto i:V){
            if(i<=first) first=i;
            else if(i<=second) second=i;
            else return true;
        }
        return false;
    }
};