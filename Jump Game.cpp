class Solution {
public:
    bool canJump(vector<int>& V) {
        if(V.size()==1)
            return true;
        if(V[0]==0)
            return false;
        int steps=V[0],maxre=INT_MIN;
        for(int i=1;i<V.size();i++){
            if(i==V.size()-1)
                return true;
            steps--;
            maxre=max(maxre,i+V[i]);
            if(steps==0){
                if(i>=maxre)
                    return false;
                steps=maxre-i;
            }
            
        }
        return false;
        
    }
};