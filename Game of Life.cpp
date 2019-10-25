class Solution {
public:
    int f(vector<vector<int>>& V,int i,int j){
        int x[]={1,-1,0,0,1,1,-1,-1};
        int y[]={0,0,1,-1,-1,1,-1,1};
        int c=0;
        for(int z=0;z<8;z++){
            if(i+x[z]<V.size()&&i+x[z]>=0&&j+y[z]<V[i].size()&&j+y[z]>=0&&(V[i+x[z]][j+y[z]]==1||V[i+x[z]][j+y[z]]==-2))
               c++;
        }
        return c;
    }
    void gameOfLife(vector<vector<int>>& V) {
        if(V.size()==0) return;
        for(int i=0;i<V.size();i++){
            for(int j=0;j<V[i].size();j++){
                if(V[i][j]==0){
                    int count=f(V,i,j);
                    //cout<<"u "<<count<<endl;
                    if(count==3)
                        V[i][j]=-1;
                }else if(V[i][j]==1){
                     int count=f(V,i,j);
                    // cout<<"d "<<count<<endl;
                    if(count<2||count>3)
                        V[i][j]=-2;
                }
            }
        }
        
        for(int i=0;i<V.size();i++){
            for(int j=0;j<V[i].size();j++){
                if(V[i][j]==-1){
                        V[i][j]=1;
                }else if(V[i][j]==-2){
                        V[i][j]=0;
                }
            }
        }
    }
};