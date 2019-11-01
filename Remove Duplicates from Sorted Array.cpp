class Solution {
public:
    int removeDuplicates(vector<int>& V) {
        
        if(V.size()<=1)
            return V.size();
        int i=0,j=0;
        while(j<V.size()){
            if(V[i]!=V[j]){
                 i++;
                V[i]=V[j];
               
            }
            j++;
        }
        return i+1;
    }
};