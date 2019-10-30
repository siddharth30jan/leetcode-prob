class Solution {
public:
    void moveZeroes(vector<int>& V) {
        if(V.empty()) return;
        int j=0;
        for(int i=0;i<V.size();i++){
            if(V[i]!=0){
                V[j]=V[i];
                j++;
            }
        }
        while(j<V.size()){
            V[j]=0;
            j++;
        }
    }
};