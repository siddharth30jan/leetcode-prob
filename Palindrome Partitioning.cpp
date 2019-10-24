class Solution {
public:
    bool ispalind(string S,int i,int j){
        while(i<j){
            if(S[i]!=S[j]) return false;
            i++;
            j--;
        }
        return true;        
    }
    void f(string S,int index,vector<string> &T,vector<vector<string>> &V){
        if(index==S.length()){
             V.push_back(T);
            return;
        }
        
        for(int i=index;i<S.length();i++){
            if(ispalind(S,index,i)){
                T.push_back(S.substr(index,i-index+1));
                f(S,i+1,T,V);
                T.pop_back();
            }
        }
           
    }
    vector<vector<string>> partition(string s) {
         vector<vector<string>> V;
        vector<string> T;
        if(s.empty())
            return V;
        f(s,0,T,V);
        return V;
    }
};