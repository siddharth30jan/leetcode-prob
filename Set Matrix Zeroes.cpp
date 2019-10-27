class Solution {
public:
    void setZeroes(vector<vector<int>>& V) {
        
       int c=0,r=0;
        for(int i=0;i<V.size();i++){
            if(V[i][0]==0){
                 c=1;
                break;
            }
               
        }
         for(int i=0;i<V[0].size();i++){
            if(V[0][i]==0){
                 r=1;
                break;
            }
               
        }
                 
         for(int i=1;i<V.size();i++){
            for(int j=1;j<V[i].size();j++){
                if(V[i][j]==0){
                    V[0][j]=0;
                    V[i][0]=0;
                }   
            }
         }
        
        for(int i=1;i<V.size();i++){
            for(int j=1;j<V[i].size();j++){
                if(V[i][0]==0||V[0][j]==0)
                    V[i][j]=0;
            }
         }
        
        if(r==1)
            for(int i=0;i<V[0].size();i++) V[0][i]=0;
                 
        if(c==1)
             for(int i=0;i<V.size();i++) V[i][0]=0;
                 }
};