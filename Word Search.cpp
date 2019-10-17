class Solution {
public:
    bool exist(vector<vector<char>>& V, string word) {
        if(V.empty())
            return false;
        for(int i=0;i<V.size();i++){
            for(int j=0;j<V[i].size();j++){
                if(word[0]==V[i][j]){
                    if(word.length()==1)
                        return true;
                    bool visit[1000][1000];
                    memset(visit,false,sizeof(visit));
                    if(f(V,word,i,j,1,visit))
                        return true;
                }
                   
        }
    }
         return false;
    }
        bool f(vector<vector<char>>& V, string word,int i,int j,int p,bool visit[1000][1000]){
            
            if(p==word.length())
                return true;
            cout<<V[i][j]<<" ";
           
            
            if(i+1<V.size()&&V[i+1][j]==word[p]&&!visit[i+1][j]){
                 visit[i][j]=true;
                    if(f(V,word,i+1,j,p+1,visit))
                        return true;
                             
                        }
             visit[i][j]=false;
                           
                        
                         if(j+1<V[i].size()&&V[i][j+1]==word[p]&&!visit[i][j+1])                        {
                             visit[i][j]=true;
                             if(f(V,word,i,j+1,p+1,visit))
                        return true;
                             
                              visit[i][j]=false;
                         }
                           
                        
                         if(i-1>=0&&V[i-1][j]==word[p]&&!visit[i-1][j]){
                             visit[i][j]=true;
                               if(f(V,word,i-1,j,p+1,visit))
                        return true;
                             visit[i][j]=false;
                         }
                            
                        
                        if(j-1>=0&&V[i][j-1]==word[p]&&!visit[i][j-1]){
                             visit[i][j]=true;
                             if(f(V,word,i,j-1,p+1,visit))
                        return true;
                            visit[i][j]=false;
                        }
            return false;
        }
};