class Solution {
public:
    void dfs(vector<vector<char>>& V,int i,int j){
        if(i<0||i>=V.size()||j<0||j>=V[i].size())
            return;
        if(V[i][j]=='0')
            return;
        //cout<<"i "<<i<<" j "<<j<<endl;
        V[i][j]='0';
        dfs(V,i+1,j);
         dfs(V,i-1,j);
         dfs(V,i,j+1);
        dfs(V,i,j-1);
        
    }
    int numIslands(vector<vector<char>>& V) {
        int ans=0;
        for(int i=0;i<V.size();i++){
            for(int j=0;j<V[i].size();j++){
                if(V[i][j]=='1'){
                    ans++;
                    dfs(V,i,j);
                }
            }
        }
        return ans;
        
    }
};