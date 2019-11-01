class Solution {
public:
    vector<int> twoSum(vector<int>& V, int target) {
        unordered_map<int,int> Z;
       for(int i=0;i<V.size();i++){
           Z[V[i]]=i;
       }
        
        for(int i=0;i<V.size();i++){
            if(Z.find(target-V[i])!=Z.end()&&Z[target-V[i]]!=i){
                return {Z[target-V[i]],i};
            }
                
        }
        return {-1,-1};
    }
};