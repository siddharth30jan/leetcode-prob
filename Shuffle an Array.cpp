class Solution {
public:
    vector<int> V,T;
    Solution(vector<int>& nums) {
       V=nums;
        T=V;
       
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return V;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
         for(int i=0;i<T.size();i++){
            int s=rand()%(i+1);
            swap(T[i],T[s]);
        }
        return T;
    }
};

