//top-down+memoisation
class Solution {
public:
    bool f(string S, unordered_set<string> &V,unordered_map<string,bool> &T){
        if(T.find(S)!=T.end())
            return T[S];
        if(V.find(S)!=V.end())
            return true;
        for(int i=0;i<S.length();i++){
            string temp=S.substr(0,i+1);
            if(V.find(temp)!=V.end()&&f(S.substr(i+1,S.length()-i-1),V,T)){
                T[S]=true;
                return true;
            }
                
        }
        T[S]=false;
        return false;
    }
    bool wordBreak(string S, vector<string>& Z) {
        if(Z.empty()) return false;
        unordered_map<string,bool> T;
        unordered_set<string> V(Z.begin(),Z.end());
        return f(S,V,T);
        
    }
};
//bottom-up dp!!
class Solution {
public:
    bool wordBreak(string S, vector<string>& Z) {
        if(Z.empty()) return false;
        unordered_set<string> V(Z.begin(),Z.end());
        bool dp[S.length()+1];
        dp[0]=true;
        for(int i=1;i<=S.length();i++){
             dp[i]=false;
            for(int j=0;j<i;j++){
                if(dp[j]){
                    if(V.find(S.substr(j,i-j))!=V.end()){
                        dp[i]=true;
                        break;
                    }
                }
            }
           
        }
        return dp[S.length()];
        
    }
};