class Solution {
public:
    void sortColors(vector<int>& V) {
        if(V.empty()) return;
        int l=0,m=0,h=V.size()-1;
        while(m<=h){
            if(V[m]==0){
                swap(V[l],V[m]);
                m++;
                l++;
            }else if(V[m]==2){
                swap(V[m],V[h]);
                h--;
            }else
                m++;
        }
        
    }
};