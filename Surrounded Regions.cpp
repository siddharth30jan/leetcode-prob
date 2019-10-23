class Solution {
public:
    void solve(vector<vector<char>>& V) {
        if(V.empty()) return;
          int visit[1000][1000]={0};
        queue<pair<int,int> > Q;
        for(int i=0;i<V.size();i++){
            if(V[i][0]=='O'){
                V[i][0]='A';
                 Q.push(make_pair(i,0));
            }
               
              if(V[i][V[0].size()-1]=='O'){
                 V[i][V[0].size()-1]='A';
                     Q.push(make_pair(i,V[0].size()-1));
              }
             
        }
        for(int j=0;j<V[0].size();j++){
                if(V[0][j]=='O'){
                   V[0][j]='A';
                    Q.push(make_pair(0,j));
                }
                     
            if(V[V.size()-1][j]=='O'){
                V[V.size()-1][j]='A';
                 Q.push(make_pair(V.size()-1,j));
            }
               
            }
        
      
        cout<<Q.size()<<" sdfvs "<<endl;
       // cout<<V[3][1]<<endl;
        while(!Q.empty()){
            pair<int,int> T=Q.front();
            cout<<T.first<<" "<<T.second<<endl;
            Q.pop();
            int x=T.first;
            int y=T.second;
           
            if(x+1<V.size()&&V[x+1][y]=='O'){
               V[x+1][y]='A';
                Q.push(make_pair(x+1,y));
            }
             if(x-1>=0&&V[x-1][y]=='O'){
               V[x-1][y]='A';
                Q.push(make_pair(x-1,y));
            }
             if(y-1>=0&&V[x][y-1]=='O'){
               V[x][y-1]='A';
                Q.push(make_pair(x,y-1));
            }
              if(y+1<V[0].size()&&V[x][y+1]=='O'){
               V[x][y+1]='A';
                Q.push(make_pair(x,y+1));
            }
        }
        //cout<<V[3][1]<<endl;
        for(int i=0;i<V.size();i++){
            for(int j=0;j<V[i].size();j++){
                if(V[i][j]=='O')
                    V[i][j]='X';
                if(V[i][j]=='A')
                    V[i][j]='O';
            }
        }
       
    }
};