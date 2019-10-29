class Solution {
public:
    vector<int> searchRange(vector<int>& V, int target) {
        if(V.empty())  return {-1,-1};
        if(!binary_search(V.begin(),V.end(),target))
            return {-1,-1};
        auto it=lower_bound(V.begin(),V.end(),target)-V.begin();
        auto it1=upper_bound(V.begin(),V.end(),target)-V.begin();
        return {it,it1-1};
    }
};