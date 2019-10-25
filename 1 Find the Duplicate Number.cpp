class Solution {
public:
    int findDuplicate(vector<int>& V) {
      
        for(int i=0;i<V.size();i++){           
               if(V[abs(V[i])]>=0)
                    V[abs(V[i])]=-V[abs(V[i])];
            else
                return abs(V[i]);
           
          
            
        }
      return -1;
    }
};